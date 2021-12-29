#include <stdio.h>

int main()
{
  char s1[10]; 
  int num1 = 283;

  sprintf(s1, "0x%x", num1); 
  // %x 를 지정하여 정수를 16진법으로 표기된 문자열로 저장
  // 16진수라는 것을 나타내기 위해 앞에 0x를 붙임

  printf("%s\n", s1);

  return 0;
}