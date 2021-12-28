## 구조체

- 하나 이상의 변수를 묶어서 좀 더 편리하게 사용할 수 있도록 도와주는 도구

- 각 변수는 자료형이 달라도 상관 없다!

- 새로운 자료형을 만드는 것과 같다.

```c
#include <stdio.h>
struct student
{ // 내부 변수들은 구조체 멤버 라고 한다.
  char name[15];
  int s_id;
  int age;
  char phone_number[14];
};


int main()
{
  struct student ted; // struct를 사용할 이름으로 ted를 선언했다.
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
```

### 구조체 멤버의 초기화

```c
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
  // 10은 .멤버= 와 같은 꼴로 초기화 하지 않아도 순서에 맞게 초기화된다.
  struct student ted2 = {22, "010-9876-5432"};
  // 멤버 변수를 적지 않아도 순서에 맞게 초기화되고, 값을 넣지 않은 멤버는 0으로 초기화된다.

  printf("나이 : %d, 번호 : %s, 학번 : %d \n", ted.age, ted.phone_number, ted.s_id);
  printf("나이 : %d, 번호 : %s, 학번 : %d \n", ted2.age, ted2.phone_number, ted2.s_id);

  return 0;
}
```

### typedef

[상세 코드](./typedef.c)

<br>

### 구조체 배열

[상세 코드](./struct_array.c)

<br>

### 구조체 포인터

- 구조체를 가리키는 포인터

<br>

[상세 코드](./struct_pointer.c)

### 구조체 함수

- 구조체를 인자로 전달할 때에는, 포인터로 전달하거나 구조체 그대로 전달할 수 있다.

- 포인터를 사용해야 원본 값을 수정할 수 있다.

- 구조체의 경우, 원본을 수정할 필요가 없을 때에도 포인터를 넘겨줘야 한다.
