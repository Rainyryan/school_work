module traffic_light (
    input  clk,
    input  rst,
    input  pass,
    output reg R,
    output reg G,
    output reg Y
);

//write your code here
reg [9:0] cycles;
reg [2:0] state;

always@(posedge clk or posedge rst)begin
  if(rst)begin
    cycles = 0;
    state = 0;
  end else begin
    cycles = cycles + 1;
    if(pass && state)begin
      cycles = 0;
      state = 0;
    end else if(state == 3'd0)begin
        if(cycles[9])begin
          state = state + 1;
          cycles = 0;
        end
    end else if(state == 3'd5)begin
        if(cycles[8])begin
          state = state + 1;
          cycles = 0;
        end
    end else if(state == 3'd6)begin
        if(cycles[9])begin
          state = 0;
          cycles = 0;
        end
    end else if(cycles[6])begin
        state = state + 1;
        cycles = 0;
    end
  end
end

always@(state)begin
  R = 0;
  G = 0;
  Y = 0;
  case(state)
    3'd0: G = 1;
    3'd2: G = 1;
    3'd4: G = 1;
    3'd5: Y = 1;
    3'd6: R = 1;
  endcase
end
endmodule
