#include<stdio.h>
#include<stdlib.h>

int main()
{
  int *p;

  p = (int *)malloc(5*sizeof(int));

  printf("%d", sizeof(p));
  printf("\n");
  printf("%d", sizeof(int *));

  // sizeof(int *) = sizeof(p) = 8. Why ?
  // Answer: IDK (XD)
}
