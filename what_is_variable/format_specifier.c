#include <stdio.h>

int main()
{
  float a = 3.141529f;
  double b = 3.141592;
  int c = 123;

  printf("a : %.2f \n", a); // 소수점 2번째까지
  printf("c : %5d \n", c); // 자리수 5개, 왼쪽부터
  printf("b  : %6.3f \n", b); // 소수점 3번째까지 자리수 6개 왼쪽부터

  return 0;
}