#include <stdio.h>
int main()
{
  char c1 = 'a';
  char *s1 = "Hello"; // 포인터에 문자열 'hello'의 주소 저장
  // 문자열은 글자 여러개가 이어진 상태, 포인터를 이용해 저장한다.
  // 문자열이 s1 안에 저장되지 않고, 문자열이 있는 곳의 메모리 주소만 저장한다.
  // 문자열은 읽기 전용으로 다른 문자열을 덮어쓸 수 없다.

  printf("%c \n", c1); // a : %c로 문자 출력
  printf("%s \n", s1); // Hello: %s로 문자열 출력

  return 0;
}