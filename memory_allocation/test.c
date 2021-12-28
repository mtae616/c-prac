#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // malloc, free 함수를 사용하기 위해 추가

int main()
{
  // char *p_name;
  // p_name = (char *)malloc(32); // 32byte 메모리를 동적 할당
  // if(p_name != NULL){ // 메모리 할당에 성공
  //   printf("Your name : ");
  //   gets(p_name);
  //   printf("Hi ~ %s \n", p_name);
  //   free(p_name);
  // } else {
  //   printf("Memory allocation error!!"); // 메모리 할당에 실패!
  // }
  int num1;
  int num2;

  int *numPtr1 = malloc(sizeof(int));
  int *numPtr2 = malloc(sizeof(int));

  scanf("%d %d", &num1, &num2);

  *numPtr1 = num1;
  *numPtr2 = num2;

  printf("%d \n", *numPtr1 + *numPtr2);

  free(numPtr1);
  free(numPtr2);

  return 0;
}