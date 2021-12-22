#include <stdio.h>

int main()
{
  int a = 1;

  printf("++a : %d \n", ++a); // 2
  
  a = 1;
  printf("a++ : %d \n", a++); // 1
  printf("a : %d \n", a); // 2
  return 0;
}