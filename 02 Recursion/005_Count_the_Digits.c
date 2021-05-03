/* Write a program in C to count the digits of a given number using recursion */

#include<stdio.h>

int count_digit(int n, int count)
{
    if (n>0)
    {
      return (1 + count_digit(n/10, count+1));
    }
}

int main()
{
  int test = 90876;

  // Expected answer : 5

  int ans = count_digit(test, 0);

  printf("The number of digits of %d is %d.", test, ans);

  return 0;
}
