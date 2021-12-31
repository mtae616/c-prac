#include <stdio.h>

struct Flags
{
  unsigned int a : 1; // a는 1비트 크기
  unsigned int b : 3; // b는 3비트 크기
  unsigned int c : 7; // c는 7비트 크기
};

int main()
{
  printf("%d", sizeof(struct Flags)); 
  // 크기 4, 1+3+7 = 11 -> 1.~~ 바이트니까 unsigned int 크기에 맞춤

  return 0;
}
