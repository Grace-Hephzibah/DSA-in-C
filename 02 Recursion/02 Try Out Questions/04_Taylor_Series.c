#include<stdio.h>

// e^x = (Sigma) x^n / n!  [From 0 to n]

double taylor(int x, int n)
{
   static double p = 1,f = 1;
   double r;

   if(n == 0)
    return 1;

   r = taylor(x,n-1);
   p = p*x;
   f = f*n;
   return r+p/f;
}

double horner(int x, int n)
{
   static double s;

   if(n==0)
    return s;

   s = 1 + s*x/n;
   return horner(x,n-1);
}

int main()
{
  int test_x = 4, test_n = 15;
  printf("%lf \n",taylor(test_x, test_n));
  printf("%lf \n",horner(test_x, test_n));
  return 0;
}
