#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _Person
{
  char name[20];
  int age;
  char address[100];
}Person, *PPerson; // 구조체 별칭 Person, 구조체 포인터 별칭 PPerson

PPerson allocPerson()
{
  PPerson p = malloc(sizeof(Person));
  strcpy(p->name, "홍길동");
  p->age = 30;
  strcpy(p->address, "서울시 용산구 한남동");
  return p;
}

int main()
{
  PPerson p1 = allocPerson();

  printf("%s\n", p1->name);
  printf("%d\n", p1->age);
  printf("%s\n", p1->address);

  return 0;
}