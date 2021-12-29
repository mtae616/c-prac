#include <stdio.h>
#include <string.h> // strchr(string character) 함수가 선언된 파일

int main()
{
  char s1[30] = "A Garden Diary";

  char *ptr = strchr(s1, 'a'); 
  // 'a' 로 시작하는 문자열 검색, 포인터 반환
  // 대소문자를 구분한다.

  while (ptr != NULL)
  {
    printf("%s\n", ptr); // 검색된 문자열 출력
    ptr = strchr(ptr +1, 'a'); // 포인터에 1을 더하여 a 다음부터 검색
  }
  
  return 0;
}
