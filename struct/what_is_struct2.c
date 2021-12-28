#include <stdio.h>

struct student
{
  int age;
  char phone_number[14];
  int s_id;
};

int main()
{
  struct student ted = {.age = 20, .phone_number = "010-1234-1234", 10};
  struct student ted2 = {22, "010-9876-5432"};

  printf("나이 : %d, 번호 : %s, 학번 : %d \n", ted.age, ted.phone_number, ted.s_id);
  printf("나이 : %d, 번호 : %s, 학번 : %d \n", ted2.age, ted2.phone_number, ted2.s_id);

  return 0;
}