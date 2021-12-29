#include <stdio.h>
#include <string.h>

int main()
{
  char s1[30] = "2015-06-10T15:32:19";

  char *ptr = strtok(s1, "-T:"); // -, T, : 를 기준으로 문자열을 자름, 기준은 여러개가 될 수 있음

  while (ptr != NULL)
  {
    printf("%s\n", ptr);
    ptr = strtok(NULL, "-T:");
  }
  return 0;
}
