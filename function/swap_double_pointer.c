#include <stdio.h>

int pswap(int **pa, int **pb);
int main()
{
  int a = 3, b;
  int *pa, *pb;
  pa = &a;
  pb = &b;

  printf("pa가 가리키는 변수의 주소값 : %p \n", pa);
  printf("pa의 주소 값 : %p \n \n", &pa);
  printf("pb가 가리키는 변수의 주소값 : %p \n", pb);
  printf("pb의 주소값 : %p \n", &pb);

  printf(" ================ 호출 ================ \n");
  pswap(&pa, &pb);
  printf(" ================ 호출 끝 ================ \n");

  printf("pa가 가리키는 변수의 주소값 : %p \n", pa);
  printf("pa의 주소 값 : %p \n \n", &pa);
  printf("pb가 가리키는 변수의 주소값 : %p \n", pb);
  printf("pb의 주소값 : %p \n", &pb);

  return 0;
}

int pswap(int **ppa, int **ppb)
{
  int *temp = *ppa;

  printf("ppa가 가리키는 변수의 주소값 : %p \n", ppa);
  printf("ppb가 가리키는 변수의 주소값 : %p \n", ppb);

  *ppa = *ppb;
  *ppb = temp;

  return 0;
}

