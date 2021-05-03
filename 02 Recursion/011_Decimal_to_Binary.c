#include<stdio.h>

void binary(int n)
{
  if ((n == 0) || (n==1))
    printf("%d", n);
  else
  {
    binary(n/2);
    printf("%d", n%2);
  }
}

int main()
{
  int test = 66;

  binary(test);
  // 66 -> 1000010

  return 0;
}
