#include <stdio.h>
#include <stddef.h>

#pragma pack(push, 1)
struct PacketHeader
{
  char flags; // 1byte
  int seq; // 4byte
};

int main()
{
  printf("%d\n", offsetof(struct PacketHeader, flags));
  printf("%d\n", offsetof(struct PacketHeader, seq));

  return 0;
}