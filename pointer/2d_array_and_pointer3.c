#include <stdio.h>

int main()
{
  int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
  int **parr;
  parr = arr;

  printf("parr[1][1] : %d \n", parr[1][1]);
  // *(*(parr + 1) + 1) 과 동일한 문장
  // parr은 int*을 가리키는 포인터이고, int* 의 크기는 8byte이기 때문에 parr + 1 하면 주소값 + 8
  // 따라서 parr + 1 은 배열의 세번째 원소 (int 는 4바이트 니까.)
  // *(parr + 1) -> 3 , *(3)+ 1 = 7 (왜냐면 int * 이니까 int의 크기만큼 4가 늘어남)

  return 0;
}