#include <stdio.h>

typedef struct{
  int s_id;
  int age;
} Student;

void print_student(Student *s){
  s->s_id = 2000;
  s->age = 25;
  printf("학번 : %d, 나이 : %d \n", (*s).s_id, (*s).age);
  // printf("학번 : %d, 나이 : %d \n", s->s_id, s->age); 이거 위에랑 같은 표현
}

int main()
{
  Student s;
  s.s_id = 1000;
  s.age = 20;

  print_student(&s);

  printf("학번 : %d, 나이 : %d \n", s.s_id, s.age);
  
  return 0;
}