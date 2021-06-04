/* Write a program in C to Print Fibonacci Series using recursion */

void fibonacci(int n, int a, int b)
{
  if (n >= 1)
  {
    printf("%d \n", a+b);
    fibonacci(n-1, b, a+b);
  }
}

int main()
{
  fibonacci(10, 1, 0);

  return 0;
}
