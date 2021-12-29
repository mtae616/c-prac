#include <stdio.h>
#include <string.h>
#include <stdbool.h> // bool 자료형 쓸 때 필요

int main()
{
  char word[30]; // 단어를 저장할 배열
  int length; // 문자열 길이
  bool isPalindrome = true; // 회문 판별값을 저장할 변수, 초깃값은 true

  printf("단어를 입력하세요 : ");
  scanf("%s", word);

  length = strlen(word);

  // 0부터 문자열 길이의 절반만큼 반복
  for(int i = 0; i < length / 2; i++){
    // 왼쪽 문자와 오른쪽 문자를 비교하여 문자가 다르면
    if(word[i] != word[length - 1 -i]){
      // 회문이 아님
      isPalindrome = false;
      break;
    }
  }

  // 회문 판별값 출력
  printf("%d\n", isPalindrome);

  return 0;
}