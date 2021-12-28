#include <stdio.h>

typedef struct {
  char name[30];
  int age;
} Student;

int main()
{
  Student taesu[3] = {
    {.name = "해리포터"},
    {.name = "헤르미온느 그레인저"},
    {.name = "론 위즐리"}
  };

  taesu[0].age = 10;
  taesu[1].age = 10;
  taesu[2].age = 10;

  printf("이름 : %s / 나이 %d \n", taesu[0].name, taesu[0].age);
  printf("이름 : %s / 나이 %d \n", taesu[1].name, taesu[1].age);
  printf("이름 : %s / 나이 %d \n", taesu[2].name, taesu[2].age);

  return 0;
}