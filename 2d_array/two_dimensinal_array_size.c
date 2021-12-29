#include <stdio.h>

int main()
{
  int numArr[3][4] = { // 세로 크기 3, 가로 크기 4인 int형 2차원 배열 선언
    {11, 22, 33, 44},
    {55, 66, 77, 88},
    { 99, 110, 121, 132}
  };

  printf("%lu \n", sizeof(numArr)); // 48 : 4바이트 크기의 요소가 12개이므로 48
  int col = sizeof(numArr[0]) / sizeof(int); // 4: 2차원 배열의 가로 크기를 구할 때는 가로 한 줄의 크기를 요소의 크기로 나눠 줌
  int row = sizeof(numArr) / sizeof(numArr[0]); // 3: 2차원 배열의 세로 크기를 구할 때는 배열이 차지하는 전체 공간을 가로 한 줄의 크기로 나눠줌

  for(int i = sizeof(numArr) / sizeof(numArr[0]) - 1; i >= 0; i--){
    for(int j = sizeof(numArr[0]) / sizeof(int) -1; j >= 0; j--){
      printf("%d ", numArr[i][j]);
    }
    printf("\n");
  }

  return 0;
}