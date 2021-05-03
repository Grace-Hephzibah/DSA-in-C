/* Write a program in C to get the largest element of an array using recursion */

#include<stdio.h>

int max_arr(int n, int arr[], int max)
{
  if (n>=0)
    return max_arr(n-1, arr, max = (max < arr[n]) ? arr[n] : max);

  else if (n<=0)
    return max;
}

int main()
{
  int a[] = {1,2,33,4,5,6,7,8,9,10};
  int len = 10;

  int ans = max_arr(len-1, a, a[0]);

  printf("The greatest number in the array is %d", ans);

  return 0;
}
