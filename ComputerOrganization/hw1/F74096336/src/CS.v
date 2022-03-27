`timescale 1ns/10ps
module CS(Y, X, reset, clk);

  input clk, reset; 
  input 	[7:0] X;
  output reg	[9:0] Y;
  
  //--------------------------------------
  //  \^o^/   Write your code here~  \^o^/
  //--------------------------------------
  
  reg [7:0] A;
  reg [7:0] Xn [8:0];
  reg [12:0] S;
  reg [7:0] Ap;
  reg [3:0] i;
  integer j;
  
  always@(posedge clk or posedge reset)begin
    if(reset)begin
      i <= 0;
      Y <= 0;
      S <= 0;
      A <= 0;
      Ap <= 0;
      for(j = 0; j < 9; j=j+1)
        Xn[j] <= 0;
    end else begin
      Xn[i] <= X;
      S <= S - Xn[i] + X;
      if(i == 8)
        i <= 0;
      else
        i <= i+1;
    end
  end
  
  always@(*)begin
    A = S/9;
    Ap = 0;
    for(j = 0; j < 9; j=j+1)
      if(Xn[j] <= A && Xn[j] > Ap)
        Ap = Xn[j];
        
    #1 Y = (S + 9*Ap)/8;
  end

endmodule