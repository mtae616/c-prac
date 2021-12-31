#include <stdio.h>

typedef enum _DayofWeek{
  Sunday = 0,
  Monday,
  Tuesday,
  Wednesday,
  Thursday,
  Friday,
  Saturday,
  DayOfWeekCount // 열거형 값의 개수를 나타내는 항목 추가
} DayofWeek;

int main()
{
  for(DayofWeek i = Sunday; i < DayOfWeekCount; i++){
    printf("%d\n", i);
  }

  return 0;
}