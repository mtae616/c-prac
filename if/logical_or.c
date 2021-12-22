#include <stdio.h>

int main()
{
  int height, weight;
  printf("당신의 키와 몸무게를 각각 입력해 주세요 : ");
  scanf("%d %d", &height, &weight);

  if (height >= 190 || weight >= 100) // 앞에 것이 참이면 뒤에거 연산 안 하고 바로 1 반환
  {
    printf("당신은 거구 입니다. \n");
  } 
  if (!(height >= 190 || weight >= 100))
  {
    printf("당신은 거구가 아닙니다. \n");
  }

  return 0;
}