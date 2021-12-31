#include <stdio.h>

struct Flags
{
  union {
    struct {
      unsigned short a : 3; 
      unsigned short b : 2;
      unsigned short c : 7;
      unsigned short d : 4;
    }; // 합계 16비트
    unsigned short e;  // 2바이트(16비트)
  };
};

int main()
{
  struct Flags f1 = { 0, };

  f1.a = 4; // 4 : 0000 0100
  f1.b = 2; // 2 : 0000 0010
  f1.c = 80; // 80 : 0101 0000
  f1.d = 15; // 15 : 0000 1111

  printf("%u\n", f1.e); // 64020 : 1111 1010000 10 100

  return 0;
}