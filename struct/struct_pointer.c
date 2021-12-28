#include <stdio.h>

typedef struct{
  int s_id;
  int age;
} Student;

int main()
{
  Student taesu;
  Student *ptr;

  ptr = &taesu;

  (*ptr).s_id = 1004; // .인 접근연산자가 우선순위가 높기 때문에 괄호를 쳐야 함
  // (*ptr).age = 20;
  ptr->age = 20; // 위와 같은 코드!, 괄호를 안 치려면 이렇게 해야 함

  printf("taesu의 학번 : %d, 나이 : %d \n", taesu.s_id, taesu.age);

  return 0;
}