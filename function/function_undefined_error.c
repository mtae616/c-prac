#include <stdio.h>

void hello(); // 반환값이 없는 hello 함수 원형 선언

int main()
{
  hello(); // hello 함수를 찾을 수 없음. 컴파일 에러
  
  return 0;
}

void hello()
{
  printf("Hello, World\n");
}