#include <stdio.h>

int main()
{
  // char s1[10] = "Hello"; 
  // 크기가 10인 char형 배열을 선언하고 문자열 할당
  // 남는 위치에는 NULL이 들어감

  // char s1[6] = "Hello";
  // hello + null 로 6이 딱 맞다!

  char s1[]="Hello"; 
  // 문자열을 할당할 때 배열의 크기를 생략하는 방법
  // 자동으로 6이 할당된다.

  printf("%s \n", s1); // Hello: %s로 문자열 출력
  return 0;
}