#include <stdio.h>
#include <string.h>

int main()
{
  // n-gram 은 문자열에서 n 개의 연속된 요소를 추출하는 방법!
  // e.g hello =>
  // he
  // el
  // ll
  // lo
  char text[30] = "Hello";
  int length;

  length = strlen(text);

  // 2그램 이므로 문자열의 끝에서 한 글자 앞까지만 반복함
  for(int i = 0; i < length -1; i++){
    printf("%c%c\n", text[i], text[i+1]); // 현재 문자와 그다음 문자 출력
  }

  return 0;
}