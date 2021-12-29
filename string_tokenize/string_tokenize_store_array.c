#include <stdio.h>
#include <string.h>

int main()
{
  char s1[30] = "The Little Prince"; 
  char *sArr[10] = {NULL,}; 
  // 이렇게 초기화하면 배열의 모든 요소가 NULL로 초기화
  int i = 0;

  char *ptr = strtok(s1, " ");

  while (ptr != NULL)
  {
    sArr[i] = ptr;
    i++;

    ptr = strtok(NULL, " ");
  }
  for(int i = 0; i < 10; i++){
    if(sArr[i] != NULL){
      printf("%s\n", sArr[i]);
    }
  }
  

  return 0;
}