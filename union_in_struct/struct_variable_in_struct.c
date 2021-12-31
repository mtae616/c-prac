#include <stdio.h>

// struct Phone
// {
//   int areacode;
//   unsigned long long number;
// };

// struct Person
// {
//   char name[20];
//   int age;
//   struct Phone phone;
// };

struct Person
{
  char name[20];
  int age;
  struct Phone
  {
    int areacode;
    unsigned long long number;
  } phone;
};

int main()
{
  struct Person p1 = {.name = "Andrew", .age = 25, {.areacode = 82, .number = 3045671234}};

  printf("%d %llu\n", p1.phone.areacode, p1.phone.number);

  return 0;
}