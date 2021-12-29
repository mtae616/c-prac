#include <stdio.h>
#include <string.h>
int main()
{
  char s1[10] = "Hello"; // 크기가 10인 char형 배열을 선언하고 문자열 할당
  char s2[10]; // 크기가 10인 char형 배열을 선언

  strcpy(s2, s1); // s1의 문자열을 s2로 복사

  printf("%s\n", s2); // Hello

  return 0;
}