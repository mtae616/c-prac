#include <stdio.h>
#include <string.h>

struct Person
{
  char name[20]; // 멤버 1
  int age; // 멤버 2
  char address[100]; // 멤버 3
};

int main()
{
  struct Person p1; // 구조체 변수 선언

  strcpy(p1.name, "홍길동");
  p1.age = 30;
  strcpy(p1.address, "서울시 용산구 한남동");

  printf("이름 : %s\n", p1.name);
  printf("나이 : %d\n", p1.age);
  printf("주소 : %s\n", p1.address);

  return 0;
}