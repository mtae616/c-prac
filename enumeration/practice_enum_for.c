#include <stdio.h>

typedef enum _Month {
  Jan = 1,
  Fab,
  Mar,
  Apr,
  May,
  Jun,
  Jul,
  Aug,
  Sep,
  Oct,
  Nov,
  Dev,
  MonthCount
} Month;

int main()
{
  for (Month i = Jan; i < MonthCount; i++){
    printf("%d\n", i);
  }

  return 0;
}