module FullAdder(S,Cout,A,B,Cin);
input A,B,Cin;
output S,Cout;
wire C1,C2,S1;
HalfAdder ha1(S1,C1,A,B);
HalfAdder ha2(S,C2,S1,Cin);
or(Cout,C1,C2);
endmodule
