#include <stdio.h>
#include <math.h>

struct Point2D
{
  int x;
  int y;
};


int main()
{
  struct Point2D p1;
  struct Point2D p2;

  // 점 1의 위치
  p1.x = 30;
  p1.y = 20;

  // 점 2의 위치
  p2.x = 60;
  p2.y = 50;

  int a = p2.x - p1.x; // 선 a의 길이
  int b = p2.y - p1.y; // 선 b의 길이

  double c = sqrt((a * a) + (b * b)); // (a * a) + (b * b) 의 제곱근을 구함

  printf("%f\n", c);

  return 0;
}