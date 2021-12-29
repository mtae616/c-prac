#include <stdio.h>
#include <string.h> // memcpy == memory copy

struct Point2D
{
  int x;
  int y;
};

int main()
{
  struct Point2D p1;
  struct Point2D p2;

  p1.x = 10;
  p1.y = 20;

  memcpy(&p2, &p1, sizeof(struct Point2D)); // Point2D 구조체 크기만큼 p1의 내용을 p2로 복사

  printf("%d %d\n", p2.x, p2.y);

  return 0;
}
