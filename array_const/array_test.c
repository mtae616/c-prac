#include <stdio.h>

int main(){
  int arr[10];
  int i, j, ave = 0;
  int temp;

  for(i = 0; i < 10; i++){
    printf("%d 번째 학생의 성적? ", i+1);
    scanf("%d", &arr[i]);
  }

  for(i = 0; i < 10; i++){
    for(j = 0; j < 10 - 1 - i; j++){
      if(arr[j] < arr[j+1]){
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }

  for(i = 0; i < 10; i++){
    printf("%d \n", arr[i]);
  }

  // for(i = 0; i < 10; i++){
  //   ave = ave + arr[i];
  // }

  // ave = ave / 10;

  // printf("전체 학생의 평균은 %d \n", ave);

  // for(i = 0; i < 10; i++){
  //   printf("학생 %d : ", i+1);
  //   if(arr[i] >= ave){
  //     printf("합격 \n");
  //   } else {
  //     printf("불합격 \n");
  //   }
  // }

  return 0;
}