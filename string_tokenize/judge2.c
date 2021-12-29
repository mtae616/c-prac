#include <stdio.h>
#include <string.h>

int main()
{
  int count = 0;
  char s1[1001];
  scanf("%[^\n]s", s1);

  char *ptr = strtok(s1, " .,");

  while (ptr != NULL)
  {
    if(strcmp(ptr, "the") == 0){
      count++;
    }
    ptr = strtok(NULL, " .,");
  }

  printf("%d\n",count);

  return 0;
}
