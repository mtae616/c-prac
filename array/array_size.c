#include <stdio.h>

int main()
{
  int numArr[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 110}; // 크기가 10인 int 형 배열
  printf("%lu \n", sizeof(numArr));
  printf("%lu \n", sizeof(numArr) / sizeof(int));

  return 0;
}