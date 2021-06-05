#include <stdio.h>
void TOH(int n,int A,int B,int C)
{
   if(n>0)
   {
     TOH(n-1,A,C,B);
     printf("(%d,%d)\n",A,C);
     TOH(n-1,B,A,C);
   }
}

int main()
{
  int test_n = 4, test_A = 1, test_B = 2, test_C = 3;
  TOH(test_n, test_A, test_B, test_C);
  return 0;
}
