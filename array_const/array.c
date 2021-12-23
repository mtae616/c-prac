#include <stdio.h>

int main()
{
  // int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  // int i;
  // printf("Array 3 번째 원소 : %d \n", arr[2]);

  // int arr2[] = {1, 2, 3, 4}; // 크기가 4인 배열 정의
  // int arr3[] = {1,2,3,4,5,6}; // 크기가 6인 배열 정의

  // for (i = 0; i < 10; i++) {
  //   printf("배열의 %d 번째 원소 : %d \n", i+1, arr[i]);
  // }

  int score[5]; // 성적을 저장하는 배열
  int i, ave = 0;

  for(i = 0; i < 5; i++) {
    printf("%d 번째 학생의 성적은 ? ", i + 1);
    scanf("%d", &score[i]);
  }
  
  for(i = 0; i < 5; i++){
    ave = ave + score[i];
  }

  printf("전체 학생의 평균은 : %d \n", ave / 5);

  return 0;
}