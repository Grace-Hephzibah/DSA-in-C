/* Write a program in C to find the Factorial of a number using recursion */

#include<stdio.h>

int factorial(int n)
{
  if (n==1)
    return 1;
  else
    return (n * factorial(n-1));
}

int main()
{
  int test = 5;
  int ans = factorial(test);

  printf("The factorial of %d is %d.", test, ans);
  return 0;
}
