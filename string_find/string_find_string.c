#include <stdio.h>
#include <string.h> // strstr 함수가 선언된 파일

int main()
{
  char s1[100] = "A Garden Diary A Garden Diary A Garden Diary";

  char *ptr = strstr(s1, "den");


  while (ptr != NULL)
  {
    printf("%s\n", ptr);
    ptr = strstr(ptr + 1, "den");
  }
  

  return 0;
}