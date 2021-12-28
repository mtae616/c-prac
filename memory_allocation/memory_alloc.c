#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num1 = 20; // int 형 변수 선언
  int *numPtr1; // int 형 포인터 선언

  numPtr1 = &num1; // num1의 메모리 주소를 구하여 numPtr에 할당 

  int *numPtr2; // int 형 포인터 선언

  numPtr2 = malloc(sizeof(int)); // int의 크기 4byte만큼 동적 메모리 할당

  printf("%p \n", numPtr1); // 변수 num1의 메모리 주소 출력
  printf("%p \n", numPtr2); // 새로 할당된 메모리의 주소 출력

  free(numPtr2); // 동적으로 할당된 메모리 해제
  return 0;
}