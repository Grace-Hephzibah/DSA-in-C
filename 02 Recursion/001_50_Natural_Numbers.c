/* Write a program in C to print first 50 natural numbers using recursion */

#include<stdio.h>

void print_natural_numbers(int n)
{
  if (n>0)
  {
    printf("%d ", n);

    if (n%10 == 0)
      printf("\n");

    print_natural_numbers(n-1);
  }
}

int main()
{
  int x = 50;

  print_natural_numbers(x);

  return 0;
}
