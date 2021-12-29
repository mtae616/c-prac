#include <stdio.h>
#include <stdlib.h>

int main()
{
  int row;
  scanf("%d", &row);
  int **m = malloc(sizeof(int *) * row);

  for(int i = 0; i < row; i++){
    m[i] = malloc(sizeof(int) * row);
  }

  for(int i = 0; i < row; i++){
    m[i][i] = 1;
  }

  for(int i = 0; i < row; i++){
    for(int j = 0; j < row; j++){
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }

  for(int i = 0; i < row; i++){
    free(m[i]);
  }
  free(m);
  
  return 0;
}