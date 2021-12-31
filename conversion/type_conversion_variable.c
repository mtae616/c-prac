#include <stdio.h>

int main()
{
  int num1 = 32;
  int num2 = 7;
  float num3;

  num3 = num1 / num2; // 소수점 출력 안 됨
  printf("%f \n", num3); // 4.000000

  num3 = (float)num1 / num2; // num1을 float로 형 변환
  printf("%f \n", num3);

  return 0;
}