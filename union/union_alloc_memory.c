#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union Box {
  short candy;
  float snack;
  char doll[8];
};

int main()
{
  union Box *b1 = malloc(sizeof(union Box)); // 공용체 포인터 선언, 메모리 할당

  printf("%d \n", sizeof(union Box)); // 8 공용체 전체 크기는 가장 큰 자료형의 크기

  strcpy(b1->doll, "bear"); // doll 문자열 bear 복사

  printf("%d\n", b1->candy);
  printf("%d", b1->snack);
  printf("%d\n", b1->doll);

  free(b1);

  return 0;
}