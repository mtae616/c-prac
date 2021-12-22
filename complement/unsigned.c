#include <stdio.h>

int main() // unsigned => 음수가 없다, int => 0 ~ 4294967295 2^32 -> 32비트
{
  // unsigned int b = -1; // 0xFFFFFFFF
  // printf("b에 들어있는 값을 unsigned int로 해석했을 때 값 : %u \n", b);
  unsigned int b = 4294967295;
  printf("b : %u \n", b);

  b++; // 1 0000 ... 0000
  printf("b : %u \n", b); // overflow

  return 0;
}