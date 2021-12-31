#include <stdio.h>
#include <stdlib.h>

void allocMemory(void **ptr, int size)
{
  *ptr = malloc(size); // void **ptr을 역참조하여 void *ptr에 메모리 할당
}

int main()
{
  long long *numPtr;

  // 단일 포인터 long long *numPtr의 메모리 주소는 long long **와 같음, 할당할 크기도 넣음
  allocMemory((void **)&numPtr, sizeof(long long));

  *numPtr = 10;
  printf("%lld\n", *numPtr);

  free(numPtr);

  return 0;
}