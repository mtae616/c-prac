#include <stdio.h>

void helloString(char *s1)
{
  printf("Hello, %s\n", s1);
}

int main()
{
  char s1[10] = "world!"; // 배열 형태의 문자열
  helloString(s1); // hello world! : 함수를 호출할 때 배열 전달
  return 0;
}