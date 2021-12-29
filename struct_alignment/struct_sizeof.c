#include <stdio.h>

struct PacketHeader
{
  char flags;
  int seq;
};

int main()
{
  struct PacketHeader header;

  printf("%d\n", sizeof(header.flags)); // 1 : char 1byte
  printf("%d\n", sizeof(header.seq)); // 4 : int 4byte

  printf("%d\n", sizeof(header)); // 8 : 구조체 전체 크기는 8바이트
  printf("%d\n", sizeof(struct PacketHeader)); // 8 : 구조체 이름으로 크기 구하기
  
  // 구조체에 int 형을 하나 추가하면 9byte가 아닌 12byte가 나오는데,
  // 구조체는 정렬할 때 가장 큰 자료형 크기의 배수로 정렬하기 때문 -> int
  
  return 0;
}
