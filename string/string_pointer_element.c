#include <stdio.h>

int main()
{
  char *s1 = "Hello"; // 포인터에 문자열 Hello의 주소 저장
  printf("%c\n", s1[1]);    // e: 인덱스 1(두 번째)의 문자 출력
  printf("%c\n", s1[4]);    // o: 인덱스 4(다섯 번째)의 문자 출력
  printf("%c\n", s1[5]);    // 문자열 맨 뒤의 NULL(\0) 출력. NULL은 화면에 표시되지 않음

  return 0;
}