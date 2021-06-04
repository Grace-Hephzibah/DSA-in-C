/* Write a program in C to calculate the power of n using recursion */

#include<stdio.h>

int Power(int a, int n)
{
  if (n == 0)
    return 1;
  else
    return (a * Power(a, n-1));
}

int main()
{
  int testVal = 5, testPower = 4;
  printf("Power: %d", Power(testVal, testPower));
  return 0;
}
