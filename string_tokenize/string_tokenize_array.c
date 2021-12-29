#include <stdio.h>
#include <string.h>

int main()
{
  char s1[30] = "The Little Prince"; 

  char *ptr = strtok(s1, " "); // " " 공백 문자를 기준으로 문자열을 자름, 포인터 반환

  while(ptr != NULL){
    printf("%s\n", ptr);
    ptr = strtok(NULL, " "); 
    // 다음 문자열을 잘라서 포인터를 반환
    // 공백에 NULL을 채운뒤 NULL을 기준으로 자른다
    // https://dojang.io/mod/page/view.php?id=376
  }

  return 0;
}