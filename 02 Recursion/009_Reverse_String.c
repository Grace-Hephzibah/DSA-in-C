/* Write a program in C to reverse a string using recursion */

#include<stdio.h>

void reverse_string(char s[], int n)
{
  if (n>=0)
  {
    printf("%c", s[n]);
    reverse_string(s, n-1);
  }
}

int main()
{
  char test[] = "Wonderful";
  int len = 9;
  reverse_string(test, len-1);
  return 0;
}
