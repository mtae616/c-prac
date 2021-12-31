#include <stdio.h>
#include <stdlib.h>

void allocMemoty(void *ptr, int size) // 반환값 없음, void 포인터 매개변수 지정
{
  ptr = malloc(size); // ptr은 alloc Memory를 벗어나면 사용할 수 없음
}

int main()
{
  long long *numPtr = NULL;

  // numPtr과 할당할 크기를 넣어줌
  allocMemoty(numPtr, sizeof(long long));

  *numPtr = 10; // 메모리가 할당되지 않았으므로 실행 에러
  printf("%lld\n", *numPtr);

  free(numPtr);

  return 0;
}