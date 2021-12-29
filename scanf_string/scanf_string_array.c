#include <stdio.h>

int main()
{
  char s1[10]; // 크기가 10인 char 형 배열 선언
  char s2[30];

  printf("문자열을 입력하세요 : ");
  scanf("%s \n", s1); // 배열은 앞에 & 를 붙이지 않음
  scanf("%[^\n]s", s2); // 공백까지 포함하여 문자열 입력받기

  printf("%s \n", s1);
  printf("%s \n", s2);

  return 0;
}