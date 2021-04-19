#include<stdio.h>

int main()
{
  int n = 5;

  // Cannot do this
  //int A[n] = {3,4,5};
  // error: variable-sized object may not be initialized

  int A[n];

  // So manual assigning is only allowed
  A[0] = 7;
  A[3] = 8;

  for(int i = 0; i<n; i++)
  {
    printf("%d \n", A[i]);
  }

  // The Output Value Showed at A[1], A[2], A[4] are all GARBAGE !!!.
  // Typical Random values

  return 0;
}
