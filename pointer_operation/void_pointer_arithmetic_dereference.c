#include <stdio.h>

int main()
{
  int numArr[5] = {11, 22, 33, 44, 55};
  void *ptr = &numArr[2];

  printf("%d\n", *(int *)ptr); // 33: 포인터 연산을 하지 않은 상태에서 역참조

  // void 포인터를 다른 포인터로 변환하여 포인터 연산을 한 뒤 역참조
  printf("%d\n", *((int *)ptr + 1));    // 44
  printf("%d\n", *((int *)ptr - 1));    // 22

  int *ptr2 = ptr;

  printf("%d\n", *(++ptr2)); // 44
  // 동적 메모리를 할당받은 포인터를 증감연산자로 포인터 연산을 하게되면
  // 포인터에 저장된 메모리 주소 자체가 바뀌게 된다!
  printf("%d\n", *(--ptr2)); // 33


  // printf("%d\n", *(++(int *)ptr));      // 44
  // printf("%d\n", *(--(int *)ptr));      // 33

  // printf("%d\n", *(((int *)ptr)++));    // 33
  // printf("%d\n", *(((int *)ptr)--));    // 44

  return 0;
}