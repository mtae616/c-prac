#include <stdio.h>

int main()
{
  int arr[3] = {1,2,3};
  
  printf("arr의 정체 : %p \n", arr); // arr의 주소값은
  printf("arr[0]의 주소값 : %p \n", &arr[0]); // 첫 원소의 주소값!
  
  return 0;
}