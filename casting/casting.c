#include <stdio.h>

int main()
{
  // int a;
  // double b;

  // b = 2.4;
  // a = b;

  // printf("%d \n", a);

  // float c = 1. /0.f; // 무한대
  // printf("a : %f \n", c);

  // int a;
  // double b;

  // b = 2.4;
  // a = (int)b;

  // printf("%d \n", a);

  int a, b;
  float c, d;

  printf("두 숫자 입력 : ");
  scanf("%d %d", &a, &b);

  c = a / b;
  d = (float)a / b;

  printf("두 수의 비율 : %f %f \n", c, d);

  return 0;
}