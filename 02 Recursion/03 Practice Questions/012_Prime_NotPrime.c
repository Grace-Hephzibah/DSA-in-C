/* Write a program in C to check a number is a prime number or not using recursion */

#include<stdio.h>
void prime(int n, int max, int count)
{
  if (count <= max)
  {
    if (n%count == 0)
      printf("Not Prime");
    else
      prime(n, max, count+1);
  }

  else
    printf("Prime");

}

int main()
{
  int test = 61;
  prime(test, (test/2)+1 , 2);

  return 0;
}
