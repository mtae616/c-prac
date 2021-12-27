#include <stdio.h>

int main()
{
  int arr[2][3];
  int brr[10][3];
  int crr[2][5];

  int (*parr)[3]; // 한 행에 3열인 배열만 받을 수 있음

  parr = arr; // 3열로 ok
  parr = brr; // 3열로 ok
  parr = crr; // 5 열로 오류!
  
  return 0;
}