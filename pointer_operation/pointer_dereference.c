#include <stdio.h>

int main()
{
  int numArr[5] = {11, 22, 33, 44, 55};
  int *numPtrA;
  int *numPtrB;
  int *numPtrC;

  numPtrA = numArr;
  numPtrB = numPtrA + 1; // 포인터 연산 numPtrA + 4 byte
  numPtrC = numPtrA + 2; // 포인터 연산 numPtrA + 8 byte

  printf("%d\n", *numPtrB);    // 22: 역참조로 값을 가져옴, numArr[1]과 같음
  printf("%d\n", *numPtrC);    // 33: 역참조로 값을 가져옴, numArr[2]와 같음

  return 0;
}