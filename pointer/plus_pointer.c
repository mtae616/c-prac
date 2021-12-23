#include <stdio.h>

int main()
{
  int a;
  char b;
  double c;
  int *pa = &a;
  char* pb = &b;
  double* pc = &c;

  printf("pa의 값: %p \n", pa);
  printf("(pa + 1) 의 값 %p \n", pa + 1); // int 4byte 4차이
  printf("pb의 값 : %p \n", pb);
  printf("(pb + 1)의 값 : %p \n", pb + 1); // char 1bye 1차이
  printf("pc 의 값 : %p \n", pc);
  printf("(pc + 1)의 값 : %p \n", pc + 1); // double 8byte 8차이

  return 0;
}