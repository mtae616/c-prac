#include <stdio.h>

int main(){
  int arr[10] = {100, 98, 97, 95, 89, 76, 92, 96, 100, 99};

  int *parr = arr;
  int sum = 0;

  while(parr - arr <= 9){
    sum += (*parr);
    parr++;
  }

  printf("내 시험 점수 평균 : %d \n", sum / 10);
  
  // printf("%p %p \n", (parr + 9), arr); 얘는 p 로 주소값 출력하는데
  // printf("%ld \n", parr - arr); 왜 얘는 ld로 출력하냐...


  return 0;
}

