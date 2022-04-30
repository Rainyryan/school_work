module SME(clk,reset,chardata,isstring,ispattern,valid,match,match_index);
input clk;
input reset;
input [7:0] chardata;
input isstring;
input ispattern;
output match;
output [4:0] match_index;
output valid;

reg match,valid;
reg [4:0] match_index;
reg [5:0] index_s;
reg [4:0] index_p,index_p_temp;
reg [4:0] cnt_m,cnt_m_temp;

reg [2:0] cs,ns,cs_p,ns_p;
reg [7:0] str [0:31];
reg [5:0] cnt_s;
reg [7:0] pat [0:7];
reg [4:0] cnt_p;
reg done;
reg star_flag;

reg [5:0] cnt_s_reg;

parameter I = 3'd0;
parameter RS = 3'd1;
parameter RP = 3'd2;
parameter M = 3'd3;
parameter D = 3'd4;

parameter P_I = 3'd0;
parameter CHECK = 3'd1;
parameter CHECK_MATCH = 3'd2;
parameter P_D_MATCH = 3'd3;
parameter P_D_UNMATCH = 3'd4;

always@(*) begin
    if(cs == D && ns == RS) cnt_s = 6'd0;
    else if(cs  == I && ns == RS) cnt_s = 6'd0;
    else if(isstring == 1'd1) cnt_s = cnt_s_reg + 6'd1;
    else cnt_s = cnt_s_reg;
end

always@(*) begin
    case(cs)
    I: begin
        if(isstring == 1'd1) ns = RS;
        else if(ispattern == 1'd1) ns = RP;
        else ns = I;
    end
    RS: begin
        if(isstring == 1'd1) ns = RS;
        else ns = RP;
    end
    RP: begin
        if(ispattern == 1'd1) ns = RP;
        else ns = M;
    end
    M: begin
        case(cs_p)
        P_I: begin
            ns_p = CHECK;
        end 
        CHECK: begin
            if(cnt_m == cnt_p) ns_p = P_D_MATCH;
            else if(cnt_s == index_s || cnt_p == index_p) ns_p = CHECK_MATCH;
            else ns_p = CHECK;
        end 
        CHECK_MATCH: begin
            if(pat[cnt_p-5'd1] == 8'h24) begin
                if(cnt_m+5'd1 == cnt_p) ns_p = P_D_MATCH;
                else ns_p = P_D_UNMATCH;
            end
            else begin
                if(cnt_m == cnt_p) ns_p = P_D_MATCH;
                else ns_p = P_D_UNMATCH;
            end
        end
        P_D_MATCH: ns_p = P_I;
        P_D_UNMATCH: ns_p = P_I;
        default: ns_p = P_I;
        endcase 
        if(done == 1'd1) ns = D;
        else ns = M;
    end
    D: begin
        if(isstring == 1'd1) ns = RS;
        else if(ispattern == 1'd1) ns = RP;
        else ns = I;
    end
    default: begin
        ns = I;
        ns_p = P_I;
    end
    endcase 
end

integer  i, j;
always@(posedge clk or posedge reset) begin
    if(reset) begin
        cs <= I;
        cs_p <= P_I;
        index_s <= 6'd0;
        index_p <= 5'd0;
        index_p_temp <= 5'd0;
        cnt_m <= 5'd0;
        cnt_m_temp <= 5'd0;
        match_index <= 5'd0;
        match <= 1'd0;
        done <= 1'd0;
        star_flag <= 1'd0;
        valid <= 1'd0;
        for(i=0;i<32;i=i+1) str[i] <= 8'd0;
        for(j=0;j<8;j=j+1) pat[j] <= 8'd0;
        cnt_s_reg <= 6'd0;
        cnt_p <= 5'd0;
    end
    else begin
        cs <= ns;
        cs_p <= ns_p;       
        if(ns_p == P_D_MATCH) match <= 1'd1;
        else if(ns_p == P_D_UNMATCH) match <= 1'd0;
        if(ns == D) valid <= 1'd1;
        else valid <= 1'd0;
        if(cs == D && ns == RS) str[5'd0] <= chardata;
        else if(isstring == 1'd1) str[cnt_s] <= chardata;
        if(isstring == 1'd1) cnt_s_reg <= cnt_s;
        if(ispattern == 1'd1) pat[cnt_p] <= chardata;
        if(ispattern == 1'd1) cnt_p <= cnt_p + 5'd1;
        else if(ns == D) cnt_p <= 5'd0;

        if(cs == D) begin
            index_s <= 6'd0;
            index_p <= 5'd0;
            index_p_temp <= 5'd0;
            cnt_m <= 5'd0;
            cnt_m_temp <= 5'd0;
            match_index <= 5'd0;
            done <= 1'd0;
            star_flag <= 1'd0;
        end
        else if(cs == M) begin
            if(cs_p == CHECK) begin
                if(str[index_s] == pat[index_p] || pat[index_p] == 8'h2e) begin
                    index_p <= index_p + 5'd1;
                    index_s <= index_s + 6'd1;
                    cnt_m <= cnt_m + 5'd1; 
                    if(index_p == 5'd0) match_index <= index_s;
                end
                else if(pat[index_p] == 8'h5e) // ^
                begin
                    if(index_s == 6'd0 && (str[index_s] == pat[index_p+5'd1] || pat[index_p+5'd1] == 8'h2e) ) begin
                        index_p <= index_p + 5'd1;
                        index_s <= index_s + 6'd1;
                        cnt_m <= cnt_m + 5'd1; 
                        if(str[index_s] == 8'h20) match_index <= index_s + 6'd1;
                        else match_index <= index_s;
                    end
                    else if(str[index_s] == 8'h20 && (str[index_s+5'd1] == pat[index_p+5'd1] || pat[index_p+5'd1] == 8'h2e) ) begin
                        index_p <= index_p + 5'd1;
                        index_s <= index_s + 6'd1;
                        cnt_m <= cnt_m + 5'd1; 
                        if(str[index_s] == 8'h20) match_index <= index_s + 6'd1;
                        else match_index <= index_s;
                    end
                    else begin
                        index_p <= index_p_temp;
                        cnt_m <= 5'd0;
                        if(index_p != 5'd0) index_s <= match_index + 6'd1;
                        else index_s <= index_s + 6'd1;
                    end
                end
                else if(pat[index_p] == 8'h24 && (index_s == cnt_s || str[index_s] == 8'h20)) begin //special pattern $
                    index_p <= index_p + 5'd1;
                    index_s <= index_s + 6'd1;
                    cnt_m <= cnt_m + 5'd1; 
                    if(index_p == 5'd0) match_index <= index_s;
                end
                else if(pat[index_p] == 8'h2A) begin // *
                    star_flag <= 1'd1;
                    index_p <= index_p + 5'd1;
                    index_p_temp <= index_p + 5'd1;
                    index_s <= index_s;
                    cnt_m <= cnt_m + 5'd1;
                    cnt_m_temp <= cnt_m + 5'd1;
                    if(index_p == 5'd0) match_index <= index_s;
                end
                else if(star_flag == 1'd1 && str[index_s] != pat[index_p] && pat[index_p] != 8'h2e) begin
                    index_p <= index_p_temp;
                    cnt_m <= cnt_m_temp;
                    index_s <= index_s + 6'd1;
                end
                else if(str[index_s] != pat[index_p] && pat[index_p] != 8'h2e) begin
                    index_p <= index_p_temp;
                    cnt_m <= 5'd0;
                    if(index_p != 5'd0) index_s <= match_index + 6'd1;
                    else index_s <= index_s + 6'd1;
                end
            end
            else if(cs_p == P_D_MATCH || cs_p == P_D_UNMATCH) begin 
                done <= 1'd1;
            end 
        end
        else begin
            done <= 1'd0;
        end
    end
end

endmodule