#include <stdio.h>
#include <string.h>

int main()
{
  char s1[10] = "world";
  char s2[20] = "Hello"; // s2 뒤에 붙일 것이므로 배열 크기를 크게 만듦

  strcat(s2, s1); 
  // s2 뒤에 s1을 붙임, s2의 메모리에 s1을 복사해서 s2 뒤에 붙임

  printf("%s\n", s2);

  return 0;
}