module AddSub(S,Cout,A,B,mode);
input[3:0]A,B;
input mode;
output[3:0]S;
output Cout;
wire [3:0]D;
xor (D[0],B[0],mode);
xor (D[1],B[1],mode);
xor (D[2],B[2],mode);
xor (D[3],B[3],mode);
RippleAdder R1(S,Cout,A,D,mode);
endmodule 
module simulate;
reg[3:0] A,B;
reg mode;
wire[3:0] S;
wire Cout;
AddSub AS1(S,Cout,A,B,mode);
initial
begin
	A=4'b0101; B4'b1110; mode=1'b0;
#50	A=4'b0110; B4'b0010; mode=1'b0;
#50	A=4'b0101; B4'b1110; mode=1'b1;
#50	A=4'b0110; B4'b0010; mode=1'b1;
end
endmodule