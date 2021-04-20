#include<stdio.h>

struct Rectangle
{
  int length;
  int breadth;
};


int main()
{
  // Initialization part alone
  // struct Rectangle r;

  // Initialization and Declaration
  struct Rectangle r = {10, 5};

  // Here r.length = 10
  // And r.breadth = 5

  printf(" Rectangle Length  : %d \n Rectangle Breadth : %d", r.length, r.breadth);
}
