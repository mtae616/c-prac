#include <stdio.h>

void helloString(char s1[])
{
  printf("Hello, %s\n", s1);
}

int main()
{
  char s1[10] = "world!"; // 배열 형태의 문자열
  helloString(s1); // 배열 전달
  helloString("world!"); // 문자열 전달

  return 0;
}