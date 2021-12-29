#include <stdio.h>
#include <stdlib.h> // malloc, free
#include <string.h> // memset

struct Point2D
{
  int x;
  int y;
};
int main()
{
  struct Point2D *p1 = malloc(sizeof(struct Point2D)); // 구조체 크기만큼 메모리 할당

  memset(p1, 0, sizeof(struct Point2D)); // p1을 구조체 크기만큼 0으로 설정

  printf("%d %d\n", p1->x, p1->y); // 0 0 memset을 사용하여 0으로 설정했으므로 x,y 모두 0

  free(p1);

  return 0;
}

