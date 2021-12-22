#include <stdio.h>

int main()
{
  float f;
  printf("실수를 입력하세요 : ");
  scanf("%f", &f);
  int i = (f - (int)f) * 100;
  printf("i = %d \n", i);

  return 0;
}