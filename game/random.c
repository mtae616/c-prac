#include <stdio.h>
#include <stdlib.h> // 난수
#include <time.h> // 시간

int main()
{
  srand(time(NULL)); // 시간을 기준으로 난수 발생
  int random = (rand() % 10) + 1;
  printf("%d", random);

  return 0;
}