#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *numPtr = malloc(sizeof(int)); // 4 바이트 만큼 메모리 할당
  char *cPtr;

  *numPtr = 0x12345678;

  printf("0x%x\n", *(char *)numPtr); // 0x78 : numPtr1을 char 포인터로 변환한 뒤 역참조

  free(numPtr);

  return 0;
}