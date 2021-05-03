#include<stdio.h>

void odd(int s, int e)
{
  if (e >= s)
  {
    if (e%2 == 1)
    {
      even(s, e-1);
      printf("%d ", e);
    }

    else
      even(s, e);
    }
}

void even(int s, int e)
{
  if (e >= s)
  {
    if (e%2 == 0)
    {
      odd(s, e-1);
      printf("%d ", e);
    }

    else
      odd(s, e);
  }
}

int main()
{
  int start = 1;
  int end = 10;

  odd(start, end);
  return 0;
}
