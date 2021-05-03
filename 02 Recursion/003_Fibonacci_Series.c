/* Write a program in C to Print Fibonacci Series using recursion */

void fibonacci(int n, int a, int b, int count)
{
  if (count <= n)
  {
    printf("%d \n", a+b);
    fibonacci(n, b, a+b, count+1);
  }
}

int main()
{
  fibonacci(10, 1, 0, 1);

  return 0;
}
