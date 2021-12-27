#include <stdio.h>

int main()
{
  // 1
  // int num1 = 10, num2 = 10;
  // int *ptr1, *ptr2;

  // ptr1 = &num1;
  // ptr2 = &num2;
  
  // *ptr1 += 10;
  // *ptr2 -= 10;

  // ptr1 = &num2;
  // ptr2 = &num1;

  // printf("ptr1 : %d, ptr2 : %d \n", *ptr1, *ptr2);

  // 2
  // int arr[5] = {1,2,3,4,5};
  // int *ptr, i;
  // ptr = arr;

  // for(i = 0; i < 5; i++){
  //   *ptr += 2;
  //   ptr++;
  // }

  // for(i = 0; i < 5; i++){
  //   printf("%d 번째 배열의 값 : %d \n", i, arr[i]);
  // }

  // 3
  // int arr[] = {1,2,3,4,5};
  // int *ptr = arr;
  // int i;

  // for (i = 0; i < 5; i++){
  //   *(ptr+i) += 2;
  //   printf("배열 %d, 값 %d \n", i, *(ptr + i));
  // }

  // 4
  // int arr[] = {1,2,3,4,5};
  // int *ptr = &arr[4];
  // int i, sum = 0;

  // for(i = 4; i >=0; i--){
  //   sum += *ptr;
  //   ptr--;
  //   if(i == 0) {
  //     printf("배열에 입력된 정수의 총 합 : %d \n", sum);
  //   }
  // }

  // 5
  // int arr[] = {1,2,3,4,5,6}, i, ch = 0;
  // int *ptr1 = &arr[5];
  // int *ptr2 = arr;
  // printf("순서 변환 전 ============= \n");
  // for(i = 0; i < 6; i++){
  //   printf("%d번째 배열 값 : %d \n", i, arr[i]);
  // }

  // for(i = 0; i <= 2; i++){
  //   ch = *ptr1;
  //   *ptr1 = *ptr2;
  //   *ptr2 = ch;
  //   ptr1--;
  //   ptr2++;
  // }

  // printf("순서 변환 후 ============= \n");
  // for(i = 0; i < 6; i++){
  //   printf("%d번째 배열 값 : %d \n", i, arr[i]);
  // }

  return 0;
}