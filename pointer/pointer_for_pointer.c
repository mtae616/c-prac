#include <stdio.h>

int main()
{
  int a;
  int *pa;
  int **ppa;

  pa = &a; // a 주소
  ppa = &pa; // pa 주소

  a = 3;

  printf("a : %d // *pa : %d // **ppa : %d \n", a, *pa, **ppa); // 값
  printf("&a : %p // pa : %p // ppa : %p \n", &a, pa, *ppa); // a 주소
  printf("&pa : %p // ppa : %p \n", &pa, ppa); // pointer 주소

  return 0;
}