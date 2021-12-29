#include <stdio.h>
#include <string.h> // strrchr 함수가 선언된 파일

int main()
{
  char s1[30] = "A Garden Diary";
  char *ptr = strrchr(s1, 'a'); // 문자열 끝에서(right)부터 'a' 로 시작하는 문자열 검색

  printf("%s\n", ptr);

  return 0;
}