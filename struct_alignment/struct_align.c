#include <stdio.h>

#pragma pack(push, 1) // 1byte 로 크기 조정
struct PacketHeader
{
  char flags; // 1byte
  int seq; // 4byte
};
#pragma pack(pop) // 정렬 설정을 이전 상태(기본값)로 되돌림

int main()
{
  struct PacketHeader header;

  printf("%d\n", sizeof(header.flags)); // 1: char
  printf("%d\n", sizeof(header.seq)); // 4 : int
  printf("%d\n", sizeof(header)); // 5: 1byte 단위로 정렬했으므로 구조체 전체 크기 5byte!

  return 0;
}
 