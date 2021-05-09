#include<stdio.h>

void odd(int t)
{
  //printf("I am in odd function - %d \n", t);

  if (t == 1)
    printf("The number is even");
  else
    even(t-1);
}

void even(int t)
{
  //printf("I am in even function - %d \n", t);

  if (t == 1)
    printf("The number is odd");
  else
    odd(t-1);
}

int main()
{
  int test = 76;
  even(test);

  return 0;
}
