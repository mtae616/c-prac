#include <stdio.h>
#include <stdlib.h>

struct Point2D
{
  int x;
  int y;
};

int main()
{
  struct Point2D *p[3];

  // 구조체 포인터 배열 전체 크기에서 요소(구조체 포인터)의 크기로 나눠서 요소 개수를 구함
  for(int i = 0 ; i < sizeof(p) / sizeof(struct Point2D *); i++){ // 요소 개수만큼 반복
    p[i] = malloc(sizeof(struct Point2D)); // 각 요소게 구조체 크기만큼 메모리 할당
  }
  
  // 인덱스로 요소에 접근한 뒤 화살표 연산자로 멤버에 접근
  (*p[0]).x = 10; 
  p[0]->y = 20;
  p[1]->x = 30;
  p[1]->y = 40;
  p[2]->x = 50;
  p[2]->y = 60;

  printf("%d %d\n", p[0]->x, p[0]->y);
  printf("%d %d\n", p[1]->x, p[1]->y);
  printf("%d %d\n", p[2]->x, p[2]->y);

  for(int i = 0; i < sizeof(p) / sizeof(struct Point2D *); i++){
    free(p[i]);
  }


  return 0;
}
