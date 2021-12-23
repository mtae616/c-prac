#include <stdio.h>

int main()
{
  int *p;
  int a;

  p = &a; 
  // p에 a의 주소를 집어 넣었다.
  *p = 3; 
  // 나의 저장된 주소에 해당하는 데이터로 생각하시오, a = 3

  printf("a 의 값 : %d \n", a);
  printf("*p 의 값 : %d \n", *p);

  return 0;
}