#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *numPtr; // int 형 포인터 선언
  numPtr = malloc(sizeof(int)); // int의 크기 4바이트 만큼 동적 메모리 할당
  *numPtr = 10; // 포인터를 역참조한 뒤 값 할당

  printf("%d \n", *numPtr); // 10: 포인터를 역참조하여 메모리에 저잗ㅇ된 값 출력

  free(numPtr); // 동적 메모리 해제

  return 0;
}