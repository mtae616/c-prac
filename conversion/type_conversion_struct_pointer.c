#include <stdio.h>
#include <stdlib.h>

struct Data
{
  char c1;
  int num1;
};

int main()
{
  struct Data *d1 = malloc(sizeof(struct Data)); // 포인터에 구조체 크기만큼 메모리 할당
  void *ptr;

  d1->c1 = 'a';
  d1->num1 = 10;

  ptr = d1; // void 포인터에 d1할당. 포인터 자료형이 달라고 컴파일 경고가 발생하지 않음

  printf("%c\n", ((struct Data*)ptr)->c1);
  printf("%c\n", ((struct Data*)ptr)->num1);

  free(d1);

  return 0;
}
