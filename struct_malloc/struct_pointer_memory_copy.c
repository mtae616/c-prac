#include <stdio.h>
#include <stdlib.h> // malloc, free
#include <string.h> // memcpy

struct Point2D {
  int x;
  int y;
};

int main()
{
  struct Point2D *p1 = malloc(sizeof(struct Point2D));
  struct Point2D *p2 = malloc(sizeof(struct Point2D));

  p1->x = 10; // p1의 멤버에만 값 저장
  p1->y = 20; // p1의 멤버에만 값 저장

  memcpy(p2, p1, sizeof(struct Point2D)); // Point2D 구조체 크기만큼 p1의 내용을 p2로 복사

  printf("%d %d\n", p2->x, p2->y);

  free(p2);
  free(p1);
  
  return 0;
}