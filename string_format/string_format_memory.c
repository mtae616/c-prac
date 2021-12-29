#include <stdio.h>
#include <stdlib.h>

int main()
{
  char *s1 = malloc(sizeof(char) * 20); // char 20개 크기만큼 동적 메모리 할당
  sprintf(s1, "Hello %s", "world!");

  printf("%s\n", s1);
  free(s1);
  
  return 0;
}