#include <stdio.h>

int main()
{
  int a;
  int *p;
  p = &a;

  printf("%lu \n", sizeof(p));
  printf("%lu \n", sizeof(int*));

  return 0;
}