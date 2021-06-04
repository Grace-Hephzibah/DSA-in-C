#include<stdio.h>

void display_even(int n, int max)
{
  if ((n%2 == 0) && (n >= 0))
  {
    display_even(n-2, max);
    printf(" %d ", n);
  }

  else
  {
    display_odd(n+3, max);
    printf("\n");
  }
}

void display_odd(int n, int max)
{
  if ((n%2 == 1) && (n <= max))
  {
    printf(" %d ", n);
    display_odd(n+2, max);
  }
}

int main()
{
  int test = 20;
  printf(" First line consist of odd numbers \n Second line consist of even numbers \n\n");
  display_even(test, test);
  printf("\n");

  return 0;
}
