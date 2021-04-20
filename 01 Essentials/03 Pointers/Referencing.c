#include<stdio.h>

int main()
{
  // Initialization
  int a = 10;
  int *p;

  // Address of a is stored in p
  p = &a;

  printf(" Value of a : %d \n Value of p : %d \n\n", a, *p);

  a = 20;

  // p points to the address of A. So whenever a changes, obviously p changes.
  printf(" Value of a : %d \n Value of p : %d \n\n", a, *p);

  *p = 30;

  // p points to the address of A. So whenever p changes, obviously a changes.
  printf(" Value of a : %d \n Value of p : %d \n\n", a, *p);

  // They both have the same address. a is the actual name of the address.
  // p is like a nick name.

  // *p -> Is called De-Referencing. Because p refers to the address.
  // but *p dereferences and gives the value stored in that address.

  // For more info on size
  printf(" Size of of a : %d \n Size of of p : %d \n\n", sizeof(a), sizeof(*p) );
  // Nothing much noted here ...

  return 0;
}
