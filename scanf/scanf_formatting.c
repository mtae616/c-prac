#include <stdio.h>

int main()
{
  char ch; // 문자, 최대 1바이트라 한글(2바이트이상) 입력하면 오류(buffer overflow)남
  short sh; // 정수
  int i;
  long lo;
  float fl; // 실수
  double du;

  printf("char 형 변수 입력 : ");
  scanf("%c", &ch);

  printf("short 형 변수 입력 : ");
  scanf("%hd", &sh);

  printf("int 형 변수 입력 : ");
  scanf("%d", &i);

  printf("long 형 변수 입력 : ");
  scanf("%ld", &lo);

  printf("float 형 변수 입력 : ");
  scanf("%f", &fl);

  printf("double 형 변수 입력 : ");
  scanf("%lf", &du);

  printf("char : %c short : %hd , int : %d \n", ch, sh, i);
  printf("long : %ld , float : %f, double : %lf \n", lo, fl, du);

  return 0;
}