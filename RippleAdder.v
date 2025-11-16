module RippleAdder(S,Cout,A,B,Cin);
input[3:0]A,B;
input Cin;
output[3:0]S;
output Cout;
wire[2:0]C;
FullAdder fa0(S[0],C[0],A[0],B[0],Cin);
FullAdder fa1(S[1],C[1],A[1],B[1],C[0]);
FullAdder fa2(S[2],C[2],A[2],B[2],C[1]);
FullAdder fa3(S[3],Cout,A[3],B[3],C[2]);
endmodule
