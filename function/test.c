#include <stdio.h>

// 1
// int magicbox(int i)
// {
//   return i + 4;
// }

// int main()
// {
//   int i;
//   printf("집어 넣을 값 : ");
//   scanf("%d", &i);

//   printf("마술 상자를 지나면! : %d \n", magicbox(i));
//   return 0;
// }

// 2
// int factorize(int k){
//   int i = 2;
//   int result[100];

//   while (k > 1){
//     if(k % i != 0){
//       i++;
//     } else {
//       printf("%d \n", i);
//       k /= i;
//     }
//   }

//   return 0;
// }

// int main()
// {
//   int i;
//   factorize(25);

//   return 0;
// }

// 13 - 2, 1
int maxsort(int *parr);
int main()
{
  int i;
  int arr[10];
  for(i = 0; i <10; i++){
    scanf("%d", &arr[i]);
  }
  maxsort(arr);

  for(i = 0; i <10; i++){
    printf("%d \n", arr[i]);
  }
  return 0;
}
int maxsort(int *parr)
{
  int i, j, temp;
  for(i = 0; i < 10-1; i++){
    for (j = 0; j < 10 - i - 1; j++){
      if (parr[j] < parr[j+1]){
        temp = parr[j];
        parr[j] = parr[j+1];
        parr[j+1] = temp;
      }
    }
  }

  return 0;
}













