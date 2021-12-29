#include <stdio.h>
#include <string.h>

int main()
{
  char s1[11];
  int n;

  scanf("%d %s", &n, s1);
  int length = strlen(s1);
  if(length < n){
    printf("wrong \n");
  } else {
    for(int i = 0; i < length - (n-1); i++){
      for(int j = 0; j < n; j++){
        printf("%c", s1[i+j]);
      }
      printf("\n");
    }
  }
  

  return 0;
}
