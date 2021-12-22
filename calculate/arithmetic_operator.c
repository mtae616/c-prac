#include <stdio.h>

int main()
{
  int a, b;
  a = 10;
  b = 3;
  
  printf("a + b 는 : %d \n", a + b);
  printf("a - b 는 %d \n", a - b);
  printf("a * b 는 : %d \n", a * b);
  printf("a / b 는 : %d \n", a / b);
  printf("a %% b 는 : %d \n", a % b); // %% -> % 는 약간 에스케이프기호랑 비슷한듯

  // printf("a / b 는 : %f \n", a / b); // int / int 는 float로 나올 수 없다!
  double c = 3;
  printf("a / c는 :  %f \n", a / c); // 산술변환(숫자의 범위가 큰 자료형으로 바뀜)로 변환해서 실수로 출력
  return 0;
}