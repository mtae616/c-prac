#include <stdio.h>
#include <string.h>    // strcmp 함수가 선언된 헤더 파일

int main()
{
  char s1[20];
  char s2[20];

  printf("문자열 두 개를 입력하세요: ");
  scanf("%s %s", s1, s2);

  int ret = strcmp(s1, s2);    // 입력된 문자열 비교

  // 리눅스와 macos 에서는 ASCII 코드 값의 차이를 반환하므로
  // if 조건문으로 판단

  if(ret == 0){
    printf("두 문자열이 같음 \n");
  } else if(ret > 0){
    printf("%s 보다 %s 가 큼 \n", s2, s1);
  } else if(ret < 0) {
    printf("%s 보다 %s가 큼 \n", s1, s2);
  }
  
  

  return 0;
}