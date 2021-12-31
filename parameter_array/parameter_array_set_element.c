#include <stdio.h>

void setElement(int arr[])
{
  arr[2] = 300;
}

int main()
{
  int numArr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

  setElement(numArr);

  printf("%d\n", numArr[2]); // 300 : setElement에서 변겅한 값이 출력됨

  return 0;
}