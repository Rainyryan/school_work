module SME(clk,reset,chardata,isstring,ispattern,valid,match,match_index);
input clk;
input reset;
input [7:0] chardata;
input isstring;
input ispattern;
output reg match;
output reg [4:0] match_index;
output reg valid;

reg [8*32:1] str;
reg [8*8:1] pat;
reg [5:0] s_len;
reg [4:0] p_len;

reg [5:0] s_id;
reg [4:0] p_id;
reg [4:0] m_cnt;

reg [2:0] cs, ns, m_cs, m_ns;
reg m_done;

parameter I = 3'd0;
parameter Rs = 3'd1;
parameter Rp = 3'd2;
parameter M = 3'd3;
parameter D = 3'd4;

integer i;


always@(*)begin
    case(cs)
      I: begin
        if(isstring) ns = Rs;
        else if(ispattern) ns = Rp;
        else ns = I;
      end
      Rs: begin
        if(isstring) ns = Rs;
        else ns = Rp;
      end
      Rp: begin
        is(ispattern) ns = Rp;
        else ns = M;
      end
      M: begin
        if(m_done) ns = D;
        else ns = M;
      end
      D: begin
        if(isstring) ns = Rs;
        else if(ispattern) ns = Rp;
        else ns = I;
      end
      default: ns = I;
    endcase
end


always@(posedge clk or negedge reset)begin
  if(reset)begin
    cs <= 0;
    m_cs <= 0;
    s_len <= 0;
    p_len <= 0;
    s_id <= 0;
    p_is <= 0;
    m_cnt <= 0;
    match <= 0;
    match_index <= 0;
    m_done <= 0;
    valid <= 0;
    for(i = 1; i < 8*32; i = i+1) str[i] <= 0;
    for(i = 1; i < 8*8; i = i+1) pat[i] <= 0;
  end
  else
    cs <= ns;
    m_cs <= m_ns;
    if(ns == D) valid <= 1;
    else valid <= 0;
    case(cs)
      Rs:begin
        str[8:1] << 8;
        str[8:1] <= chardata;
        s_len <= s_len + 1;
      end
      Rp:begin
        pat[8:1] << 8;
        pat[8:1] <= chardata;
        p_len <= p_len + 1;
      end
      M:begin
        
      end
      D:begin
        m_cs <= 0;
        s_len <= 0;
        p_len <= 0;
        s_id <= 0;
        p_is <= 0;
        m_cnt <= 0;
        match <= 0;
        match_index <= 0;
        m_done <= 0;
        valid <= 0;
      end
    endcase
  end
end









endmodule
