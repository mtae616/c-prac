#include <stdio.h>

int swap(int *a, int *b); 
// 컴파일러에게 함수에 대한 정보 제공
// prototype, hoisting을 가능하게 하는 역할
// 매개변수가 부족하거나 많을 떄에 확인할 수 있게 해줌
int main()
{
  int i, j;
  i = 3;
  j = 5;

  printf("swap 이전 : i : %d, j : %d \n", i, j);
  swap(&i, &j);
  printf("swap 이후 : i : %d, j : %d \n", i, j);

  return 0;
}

int swap(int *a, int *b){
  int temp = *a;

  *a = *b;
  *b = temp;

  return 0;
}