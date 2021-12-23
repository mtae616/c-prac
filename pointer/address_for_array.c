#include <stdio.h>

int main()
{
  int arr[3] = {1, 2, 3};
  int (*parr)[3] = &arr;
  // arr 이 크기가 3인 배열이기 때문에, &arr 을 보관할 포인터는 크기가 3인 배열을 가리키는 포인터
  // c 언어 문법상 이를 정의하는 방식은 위와 같다.
  // parr을 정의할 때는 괄호가 꼭 필요하다.

  printf("arr[1] : %d \n", arr[1]);
  printf("parr[1] : %d \n", (*parr)[1]);

  printf("arr : %p \n", arr);
  printf("parr : %p \n", parr);

  return 0;
}