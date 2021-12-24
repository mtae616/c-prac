#include <stdio.h>

int main()
{
  char d[30];
  int i;
  scanf("%s", d);
  for(i = 0; d[i]!='\0'; i++){ // \0 은 아스키문자의 정수값은 0, Null 로도 사용될 수 있다.
    printf("\'%c\'\n", d[i]);
  }

  return 0;
}