#include <stdio.h>
#include <stddef.h> // offsetof 매크로가 정의된 헤더 파일

struct PacketHeader
{
  char flags; // 1byte
  int seq; // 4byte
};

int main()
{
  //offsetof 위치!
  printf("%d\n", offsetof(struct PacketHeader, flags));
  printf("%d\n", offsetof(struct PacketHeader, seq));
  return 0;
}
