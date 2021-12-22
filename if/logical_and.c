#include <stdio.h>

int main() {
  int a;
  printf("아무 숫자나 입력하세요 : ");
  scanf("%d", &a);

  if(a >= 10 && a < 20) { 
    // & 와 다른 점은, 1 or 0 return
    // 앞이 이미 false 면 뒤는 확인하지 않음 -> short circuit evaluation(sce)
    printf(" %d 는 10 이상, 20 미만인 수 입니다. \n", a);
  }
  return 0;
}