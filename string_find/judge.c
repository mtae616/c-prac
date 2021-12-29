#include <stdio.h>
#include <string.h>

int main()
{
  char s1[1000];
  int count;

  scanf("%[^\n]s\n", s1);

  char *ptr = strchr(s1, ' ');

  while (ptr != NULL)
  {
    ptr = strchr(ptr + 1, ' ');
    count+=1;
  }

  printf("%d\n", count);

  return 0;
}