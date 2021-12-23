#include <stdio.h>

int main()
{
  int a;
  int* pa = &a;
  int* pb;

  *pa = 3;
  pb = pa; // pa 변수의 주소값 pb에 대입

  printf("pa 가 가리키고 있는 것 : %d \n", *pa);
  printf("pb 가 가리키고 있는 것 : %d \n", *pb);

  return 0;
}