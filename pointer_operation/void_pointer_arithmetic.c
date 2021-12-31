#include <stdio.h>
#include <stdlib.h>

int main()
{
  void *ptr = malloc(100);

  printf("%p\n", ptr); // 포인터 메모리 주소
  printf("%p\n", (int *)ptr + 1); // 다른 포인터로 변환한 뒤 포인터 연산
  printf("%p\n", (int *)ptr - 1); // 다른 포인터로 변환한 뒤 포인터 연산

  void *ptr2 = ptr;    // 메모리 주소를 변화시킬 때는 다른 포인터에 보관
  // printf("%p\n", ++(int *)ptr2);     // 00FADD24: 다른 포인터로 변환한 뒤 포인터 연산
  // printf("%p\n", --(int *)ptr2);     // 00FADD20: 다른 포인터로 변환한 뒤 포인터 연산

  // printf("%p\n", ((int *)ptr2)++);   // 00FADD20: 다른 포인터로 변환한 뒤 포인터 연산
  // printf("%p\n", ((int *)ptr2)--);   // 00FADD24: 다른 포인터로 변환한 뒤 포인터 연산


  return 0;
}