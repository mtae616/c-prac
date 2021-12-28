#include <stdio.h>
#include <stdlib.h>
#include <string.h> // memset 함수가 선언된 헤더 파일

// memset() => 메모리의 내용을 원하는 크기만큼 특정한 값으로 설정할 수 있다.
// 이때 설정하는 크기는 바이트 단위

int main()
{
  long long *numPtr = malloc(sizeof(long long)); // long long의 크기 8byte만큼 동적 메모리 할당

  memset(numPtr, 0x27, 8); // numPtr이 가리키는 메모리를 8바이트 만큼 0x27로 설정
  // 인자로 포인터 설정할 값, 설정할 크기
  printf("0x%llx\n", *numPtr); // 0x2727272727272727 27이 8개 들어가 있음

  free(numPtr); // 동적으로 할당한 메모리 해제

  return 0;
}