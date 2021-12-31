#include <stdio.h>
#include <stdlib.h>

struct Phone
{
  int areacode;
  unsigned long long number;
};
struct Person
{
  char name[20];
  int age;
  struct Phone *phone;
};

int main()
{
  struct Person *p1 = malloc(sizeof(struct Person));
  p1->phone = malloc(sizeof(struct Phone));

  (*p1).phone->areacode = 82; // 포인터 -> 포인터 -> 멤버 순으로 접근하여 값 할당
  p1->phone->number = 3045671234; // 포인터 -> 포인터 -> 멤버 순으로 접근하여 값 할당

  printf("%d %llu \n", p1->phone->areacode, p1->phone->number);

  free(p1->phone);
  free(p1);

  return 0;
}

