#include <stdio.h>

int main()
{
  int a;
  int *p;

  p = &a;
  a = 2;

  printf("a의 값 : %d \n", a);
  printf("*p의 값 : %d \n", *p);

  return 0;
}