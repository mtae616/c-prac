#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void showEnding(int mScore, int cScore) {
  if(mScore > cScore){
    printf("승자는 사용자입니다! \n");
  } else{
    printf("승자는 컴퓨터입니다! \n");
  }
}

int main()
{
  int diceCount = 0;
  int diceEnd = 3;
  int mScore = 0;
  int cScore = 0;
  int selection;
  srand(time(NULL));
  
  printf("주사위를 3번 던져서 눈의 합이 더 큰 사람이 이긴다. \n");
  printf("1번을 누르면 주사위를 굴리고 \n");
  printf("2번을 누르면 주사위 눈의 합을 보여준다. \n");

  while(1)
  {
    printf("입력하세요 : ");
    scanf("%d", &selection);
    printf("%d \n", selection);
    switch (selection)
    {
    case 1:
      int mRandom = (rand() % 10) + 1;
      int cRandom = (rand() % 10) + 1;

      mScore += mRandom;
      cScore += cRandom;

      printf("사용자의 점수 : %d \n", mRandom);
      printf("컴퓨터의 점수 : %d \n", cRandom);

      diceCount++;
      break;
    case 2:
      printf("사용자의 점수 : %d \n", mScore);
      printf("컴퓨터의 점수 : %d \n", cScore);
      break;

    default:
      printf("다시 입력하세요 \n");
      break;
    }

    if (diceCount == diceEnd){
      showEnding(mScore, cScore);
      break;
    }
    
  }
  return 0;
}