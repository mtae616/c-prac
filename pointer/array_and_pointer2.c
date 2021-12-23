#include <stdio.h>

int main()
{
  int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  int* parr;
  int i;
  parr = &arr[0];

  for(i = 0; i < 10; i++){
    printf("arr[%d] 의 주소값 : %p", i, &arr[i]); // arr의 순차적 주소값이랑
    printf("(parr + %d)의 값 : %p", i, (parr + i)); // &arr[0] + i 주소값이랑 랑 같음!

    if(&arr[i] == (parr + i)) {
      printf(" ==> 일치! \n");
    } else{
      printf(" ==> 불일치! \n");
    }

  }

  return 0;
}