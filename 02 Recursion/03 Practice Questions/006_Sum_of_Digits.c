/* Write a program in C to find the sum of digits of a number using recursion */

#include<stdio.h>

int sum_digit(int n)
{
    if (n>0)
    {
      return (n%10 + sum_digit(n/10));
    }
}

int main()
{
  int test = 90876;

  // Expected answer : 5

  int ans = sum_digit(test);

  printf("The sum of digits of %d is %d.", test, ans);

  return 0;
}
