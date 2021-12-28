#include <stdio.h>

int add1_element(int (*arr)[2], int row);
int main()
{
  int arr[3][2];
  int i, j;

  for (i = 0; i < 3; i++){
    for(j = 0; j < 2; j++){
      scanf("%d", &arr[i][j]);
    }
  }

  add1_element(arr, 3);

  for (i=0; i<3; i++){
    for(j = 0; j < 2; j++){
      printf("arr[%d][%d] : %d \n", i, j, arr[i][j]);
    }
  }
  return 0;
}

int add1_element(int (*arr)[2], int row){
  // 2차원 배열을 파라미터로 받을 때에는 오직 열의 개수만 생각한다
  // (*arr)[2] == arr[][2]
  int i, j;
  for(i = 0; i < row; i++){
    for(j = 0; j < 2; j++){
      arr[i][j]++;
    }
  }
  return 0;
}