#include <stdio.h>

struct EncyptionHeader{
  char flags;
  int asd;
  int asdf;
};

int main()
{
  struct EncyptionHeader header;

  printf("%d \n", sizeof(header));

  return 0;
}