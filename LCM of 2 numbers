#include <stdio.h> 
int Min(int Num1, int Num2) 
{  return Num1 >= Num2?Num2:Num1; } 
int LCM(int Num1, int Num2, int K) 
{
if (Num1 == 1 || Num2 == 1) 
{return Num1 * Num2 ; }
if (Num1 == Num2)
{return Num1; }
if (K <= Min(Num1, Num2)) { 
if (Num1 % K == 0 && Num2 % K == 0)
{return K * LCM( Num1 / K, Num2 / K, 2); 
} 
else
{return LCM(Num1, Num2, K + 1); }
} 
else
{return Num1 * Num2; }
} 
void LCM2(int N, int M) 
{ 
int lcm = LCM(N, M, 2);
printf("%d", lcm); 
} 
int main() 
{ int N = 6, M = 24; 
LCM2(N, M);
return 0; 
}


