#include <stdio.h>

void printFullName(char *family, char *given)
{
  printf("%s%s\n", family, given);
}

int main()
{
  char familyName[31];
  char givenName[31];

  scanf("%s %s", familyName, givenName);

  printFullName(familyName, givenName);

  return 0;
}