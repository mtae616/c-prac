#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *helloLiteral() // char 포인터를 반환하는 helloLiteral 함수 정의
{
  char *s1 = "Hello, World!";
  return s1; // 문자열 Hello, world!는 메모리에 저장되어 있으므로 사라지지 않음, 문자열 포인터 리턴
}

char *helloDynamicMemory() // char 포인터를 반환하는 helloDynamicMemory 함수 정의
{
  char *s1 = malloc(sizeof(char) * 20); // char 20개 크기만큼 동적 메모리 할당
  strcpy(s1, "Hello, World!"); // Hello, world! 를 s1에 복사
  return s1; // 문자열 포인터 리턴
}
int main()
{
  char *s1;
  char *s2;

  s1 = helloLiteral();
  s2 = helloDynamicMemory();

  printf("%s\n", s1);
  printf("%s\n", s2);

  free(s2);

  return 0;
}