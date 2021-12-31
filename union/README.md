```c
#include <stdio.h>
#include <string.h> // strcpy 함수가 선언된 헤더 파일

union Box { // 공용체 정의
  short candy; // 2바이트
  float snack; // 4바이트
  char doll[8]; // 8바이트
};
// union은 가장 큰 자료형의 공간을 공유한다
// 어느 한 멤버에 값을 저장하면 나머지 멤버의 값은 사용할 수 없다.
// struct 는 2 + 4 + 8 = 14인데
// union은 가장 큰 8바이트만 쓰니까 6바이트 이득

int main()
{
  union Box b1; // 공용체 변수 선언

  printf("%lu \n", sizeof(b1)); // 8 : 공용체 전체 크기는 가장 큰 자료형의 크기

  strcpy(b1.doll, "bear"); // doll 에 문자열 복사

  printf("%hd \n", b1.candy); // 25954 엉망인값
  printf("%f \n", b1.snack);  // 4464428256607938511036928229376.000000 엉망인값
  printf("%s \n", b1.doll); // bear

  b1.candy = 10;
  printf("%hd\n", b1.candy);    // 10: 사용(출력)

  b1.snack = 60000.0f;
  printf("%f\n", b1.snack);    // 60000.00000000: 사용(출력)

  strcpy(b1.doll, "bear");
  printf("%s\n", b1.doll);     // bear: 사용(출력)


  return 0;
}

```
