#include <stdio.h>

int swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
  return 0;
}

int main()
{
  int i, j;

  i = 3;
  j = 5;

  printf("swap 이전 : i : %d, j : %d \n", i, j);
  swap(&i, &j);
  printf("swap 이전 : i : %d, j : %d \n", i, j);
  return 0;
}