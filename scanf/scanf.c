#include <stdio.h>

int main() {
  float celsius;
  // double celsius; -> double 쓸려면 서식문자 lf(long float)

  printf("섭씨 온도를 화씨 온도로 바꿔주는 프로그램 입니다. \n");
  printf("섭씨 온도를 입력해 주세요 : ");
  scanf("%f", &celsius);

  printf("섭씨 %f 도는 화씨로 %f 도 입니다. \n", celsius, 9 * celsius / 5 + 32);

  return 0;
}