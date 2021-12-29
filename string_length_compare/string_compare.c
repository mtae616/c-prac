#include <stdio.h>
#include <string.h>
int main()
{
  char s1[10] = "Hello";
  char *s2 = "Hello";

  int ret = strcmp(s1, s2); 
  // 두 문자열이 같은지 문자열 비교
  // 두 문자열이 같으면 0
  // s2가 크면 음수
  // s1이 크면 양수

  printf("%d \n", ret); // 두 문자열이 같으면 0

  return 0;
}