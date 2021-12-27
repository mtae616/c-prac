#include <stdio.h>
#include <stdlib.h> // malloc, free 함수를 사용하기 위해 추가

void main()
{
  char *p_name;
  p_name = (char *)malloc(32); // 32byte 메모리를 동적 할당
  if(p_name != NULL){ // 메모리 할당에 성공
    printf("Your name : ");
    gets(p_name);
    printf("Hi ~ %s \n", p_name);
    free(p_name);
  } else {
    printf("Memory allocation error!!"); // 메모리 할당에 실패!
  }
}