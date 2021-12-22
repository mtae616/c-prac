#include <stdio.h>

int main(){
  int useranswer;

  printf("컴퓨터가 생각한 숫자를 맞추어 보세요! \n");

  for(;;) {
    scanf("%d", &useranswer);
    if(useranswer == 3) {
      printf("맞추셨군요! \n");
      break;
    } else {
      printf("틀렸어요! \n");
    }
  }


  return 0;
}