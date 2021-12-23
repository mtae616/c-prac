#include <stdio.h>

int main()
{
  // int a;
  // int b;
  // const int* pa = &a; // *pa 는 const

  // *pa = 3; // 이거 오류 포인터로 const 정의 하였으므로 값을 바꿀 수 없음
  // pa = &b;

  // int a;
  // int b;
  // int* const pa = &a; // pa 는 const

  // *pa = 3;
  // pa = &b; // 이거 오류 pa를 const 로 정의하였으므로 주소값 바꿀 수 없음

  int a;
  int b;
  const int* const pa = &a;

  // *pa = 3; // 올바르지 않음
  // pa = &b; // 올바르지 않음

  return 0;
}