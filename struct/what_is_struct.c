#include <stdio.h>
struct student
{
  char name[15];
  int s_id;
  int age;
  char phone_number[14];
};


int main()
{
  struct student ted;
  printf("이름 : ");
  scanf("%s", ted.name);
  printf("학번 : ");
  scanf("%d", &ted.s_id);
  printf("나이 : ");
  scanf("%d", &ted.age);
  printf("번호 : ");
  scanf("%s", ted.phone_number);

  printf("이름 : %s, 학번 : %d, 나이 : %d, 번호 : %s \n", ted.name, ted.s_id, ted.age, ted.phone_number);
  return 0;
}