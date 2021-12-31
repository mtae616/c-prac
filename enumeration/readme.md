```c
#include <stdio.h>

enum DayOfWeek { // 열거형 정의
  Sunday = 0, // 초깃값 할당, 아무 값도 정의하지 않으면 0으로 시작
  Monday, // 1 자동 할당
  Tuesday, // 2 자동 할당
  Wednesday, // 3 자동 할당
  Thursday, // 4 자동 할당
  Friday, // 5 자동 할당
  Saturday // 6 자동 할당
};

// typedef enum _DayOfWeek {    // 열거형 이름은 _DayOfWeek
//     Sunday = 0,
//     Monday,
//     Tuesday,
//     Wednesday,
//     Thursday,
//     Friday,
//     Saturday
// } DayOfWeek;                 // typedef를 사용하여 열거형 별칭을 DayOfWeek로 정의

// typedef enum {    // 익명 열거형 정의
//     Sunday = 0,
//     Monday,
//     Tuesday,
//     Wednesday,
//     Thursday,
//     Friday,
//     Saturday
// } DayOfWeek;      // typedef를 사용하여 열거형 별칭을 DayOfWeek로 정의

// DayOfWeek week;    // 열거형 별칭으로 공용체 변수 선언

// enum DayOfWeek {    // 열거형 정의
//     Sunday = 0,
//     Monday,
//     Tuesday,
//     Wednesday,
//     Thursday,
//     Friday,
//     Saturday
// } week;             // 열거형을 정의하는 동시에 변수 week 선언

int main()
{
  enum DayOfWeek week;
  week = Tuesday;

  printf("%d\n", week); // 2 : Tuesday의 값 출력

  return 0;
}
```
