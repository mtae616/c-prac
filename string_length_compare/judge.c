#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char *s1 = malloc(sizeof(char) * 30);

  scanf("%s", s1);
  printf("%d\n", strlen(s1));

  return 0;
}