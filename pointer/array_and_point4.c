#include <stdio.h>

int main()
{
  int arr[6] = {1,2,3,4,5,6};
  int* parr = arr;

  printf("Sizeof(arr) : %d \n", sizeof(arr)); // 6 x 4 = 24byte
  printf("Sizeof(parr) : %d \n", sizeof(parr)); // 포인터의 크기 8byte => 1byte = 8bit => 64/8 = 8byte

  return 0;
}