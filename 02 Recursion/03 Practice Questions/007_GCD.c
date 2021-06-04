/* Write a program in C to find GCD of two numbers using recursion */

#include<stdio.h>

int GCD(int a, int b)
{
  if(a==b)
    return(a);
  else if (a>b)
    return GCD(a-b,b);
  else
    return GCD(a, b-a);
}

int main()
{
  int test1 = 24;
  int test2 = 33;

  int ans = GCD(test1,test2);

  printf("The LCM of %d and %d is %d.", test1, test2, ans);

  return 0;
}
