#include <stdio.h>

int main()
{
  int numArr[5] = {11, 22, 33, 44, 55};
  int *numPtrA;

  numPtrA = numArr;

  printf("%d\n", *(numPtrA + 1)); // 22 numPtrA에서 순방향으로 4바이트만큼 떨어진 메모리에 주소 접근 numArr[1]과 같음
  printf("%d\n", *(numPtrA + 2)); // 33 numPtrA에서 순방향으로 8바이트만큼 떨어진 메모리에 주소 접근 numArr[2]와 같음

  return 0;
}