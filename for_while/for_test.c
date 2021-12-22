#include <stdio.h>

int main()
{
  int i, j, k;
  // 1
  // for(i = 0; i < 3; i++) {
  //   for (j = 0; j < 2-i; j++){
  //     printf(" ");
  //   }

  //   for(k = 0; k < (i * 2) + 1; k++){
  //     printf("*");
  //   }

  //   printf("\n");
  // }

  // 2
  // for(i = 0; i <3; i++) {
  //   for(j = 0; j < 5; j++){
  //     if(i == 0){
  //       printf("*");
  //     } else if(i == 1) {
  //       if ( j == 0 || j > 3){
  //         printf(" ");
  //       } else {
  //         printf("*");
  //       }
  //     } else if(i == 2){
  //       if(j == 0 || j == 1 || j > 2) {
  //         printf(" ");
  //       } else {
  //         printf("*");
  //       }
  //     }
  //   }
  //   printf("\n");
  // }

  // 3
  // int sum = 0;
  // for(i = 0; i <= 1000; i++){
  //   if(i % 3 == 0 || i % 5 == 0){
  //     sum += i;
  //   }
  // }
  // printf("%d \n", sum);

  // 4
  // int fibo, sum;
	// int fibo_first = 1;
	// int fibo_second = 1;

	// sum = fibo_second;

	// for (i = 3; i <= 1000000; i++) {
	// 	fibo = fibo_first + fibo_second;

	// 	if (i % 2 == 0) {
	// 		sum += fibo;
	// 	}

	// 	if (fibo > 1000000) {
	// 		printf("%d \n", sum);
	// 		return 0;
	// 	}

	// 	fibo_first = fibo_second;
	// 	fibo_second = fibo;
	// }

  // 5
  // int temp, sum = 1;
  // printf("값 입력! ");
  // scanf("%d", &temp);

  // for(i = 1; i <= temp; i ++) {
  //   sum *= i;
  // }
  // printf("%d \n", sum);

  // 6
  // int sum = 0;
  // for(i = 0; i <= 2000; i++){
  //   for(j = 2; j < i; j++){
  //     if(i + j > 2000) continue;
  //     for(k = 1; k < j; k++){
  //       if(i + j + k > 2000) continue;
  //       if(i + j + k == 2000) sum += 1;
  //     }
  //   }
  // }
  // printf("%d \n", sum);

  return 0;
}