#include <stdio.h>

int main()
{
  char s1[20];

  sprintf(s1, "Hello, %s", "world!"); // "Hello, %s"로 서식을 지정하여 s1에 저장

  printf("%s\n", s1); // Hello, world! 문자열 s1 출력

  return 0;
}