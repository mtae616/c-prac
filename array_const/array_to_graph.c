#include <stdio.h>

int main()
{
  int i, arr[5], count;
  
  for(i = 0; i < 5; i++){
    printf("입력 : ");
    scanf("%d", &arr[i]);
  }

  for(i = 0; i < 5; i++){
    count = 0;
    while (1)
    {
      count += 1;
      printf("=");
      if(count == arr[i]) {
        break;
      }
    }
    printf("\n");
  }

  return 0;
}