#include <stdio.h>

int main() {
  int i;
  printf("입력하고 싶은 숫자를 입력하세요 ! : ");
  scanf("%d", &i);

  if(i == 7){
    printf("당신은 행운의 숫자 7을 입력했습니다 \n");
  } else if(i == 4) {
    printf("죽음의 숫자 4! \n");
  } else {
    printf("그냥 보통 숫자인 %d 를 입력했군요 \n", i);
  }
    
      
  return 0;
}