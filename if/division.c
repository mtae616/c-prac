#include <stdio.h>

int main() {
  double i, j;
  printf("나누고 싶은 두 정수를 입력하세요 : \n");
  scanf("%lf %lf", &i, &j);

  if(j == 0) {
    printf("0으로 나눌 수 없습니다. \n");
    return 0;
  }
  printf("%f 를 %f로 나눈 결과는 : %f \n", i, j, i / j);

  return 0;
}