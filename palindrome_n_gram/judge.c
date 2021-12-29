#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
  char s1[31];
  char temp[31];
  bool isPalindrome = true;
  int j = 0;
  scanf("%[^\n]s", s1);
  
  for(int i = 0; i < strlen(s1); i++){
    if(s1[i] != ' '){
      temp[j] = s1[i];
      j++;
    }
  }
  int tempLen = strlen(temp);
  for(int i = 0; i < tempLen / 2; i++){
    if (temp[i] != temp[tempLen - 1 - i])
    {
      isPalindrome = false;
      break;
    }
  }

  printf("%d\n", isPalindrome);

  return 0;
}