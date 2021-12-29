#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
  int matrix[5][5];

  scanf("%d %d %d %d %d", 
      &matrix[0][0], &matrix[0][1], &matrix[0][2], &matrix[0][3], &matrix[0][4]);
  scanf("%d %d %d %d %d", 
      &matrix[1][0], &matrix[1][1], &matrix[1][2], &matrix[1][3], &matrix[1][4]);
  scanf("%d %d %d %d %d", 
      &matrix[2][0], &matrix[2][1], &matrix[2][2], &matrix[2][3], &matrix[2][4]);
  scanf("%d %d %d %d %d", 
      &matrix[3][0], &matrix[3][1], &matrix[3][2], &matrix[3][3], &matrix[3][4]);
  scanf("%d %d %d %d %d", 
      &matrix[4][0], &matrix[4][1], &matrix[4][2], &matrix[4][3], &matrix[4][4]);

  int row = sizeof(matrix) / sizeof(matrix[0]);
  int col = sizeof(matrix[0]) / sizeof(int);
  int temp[5][5];
  for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
      temp[i][j] = matrix[j][i];
    }
  }

  for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
      printf("%d ", temp[i][j]);
    }
    printf("\n");
  }

  return 0;
}