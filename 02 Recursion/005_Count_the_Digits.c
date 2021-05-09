/* Write a program in C to count the digits of a given number using recursion */

#include<stdio.h>

int count_digit(int n)
{
    if (n>0)
      return (1 + count_digit(n/10));
}

/*
int count_digit(int n)
{
  if (n==0)
    return ;
  else
    return(1+count_digit(n/10));
}
*/

int main()
{
  int test = 908761;

  // Expected answer : 5

  int ans = count_digit(test);

  printf("The number of digits of %d is %d.", test, ans);

  return 0;
}
