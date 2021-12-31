#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Person
{
  char name[20];
  int age;
  char address[100];
};

struct Person *allocPerson() // Person 구조체 포인터를 반환하는 allocPerson 함수 정의
{
  struct Person *p = malloc(sizeof(struct Person)); // 구조체 포인터에 동적 메모리 할당

  strcpy(p->name, "홍길동");
  p->age = 30;
  strcpy(p->address, "서울시 용산구 한남동");

  return p; // 구조체 포인터 반환
};

int main()
{
  struct Person *p1;
  p1 = allocPerson();

  // allocPerson에서 저장한 값들이 출력됨
  printf("이름: %s\n", p1->name);       // 홍길동
  printf("나이: %d\n", p1->age);        // 30
  printf("주소: %s\n", p1->address);    // 서울시 용산구 한남동

  free(p1);    // 동적 메모리 해제

}

