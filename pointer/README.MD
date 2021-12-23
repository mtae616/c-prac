## 포인터 : 메모리 상에 위치한 특정한 데이터의 (시작) 주소값을 보관하는 변수

<br>

- 포인터에도 형이 있다
- int 형 데이터의 주소값을 저장하는 포인터와, char 형 데이터의 주소값을 저장하는 포인터가 서로 다르다.

<br>

```
(포인터에 주소값이 저장되는 데이터의 형) *(포인터 이름)
(포인터에 주소값이 저장되는 데이터의 형)* (포인터 이름)
```

<br>

## & 연산자

<br>

- & 를 AND 연산자로 사용하지 않기위해 주의
- AND 연산은 2개의 피연산자가 필요

<br>

```c
&a // a에 대한 주소 값을 확인하겠다!
```

<br>

```c
#include <stdio.h>

int main()
{
  int a;
  a = 2;

  printf("%p \n", &a);
  // 0x7fff80505b64 처럼 주소값이 나옴!
  return 0;
}
```

<br>

## \* 연산자

<br>

- 나(포인터)를 나에게 저장된 주소값에 위치한 데이터로 생각해줘!

<br>

```c
*a;
```

<br>

```c
#include <stdio.h>

int main()
{
  int *p;
  int a;

  p = &a;
  a = 2;

  printf("a의 값 : %d \n", a);
  printf("*p의 값 : %d \n", *p);

  return 0;
}
```

<br>

## 상수 포인터

<br>

```c
#include <stdio.h>
int main() {
  int a;
  int b;
  const int* pa = &a;

  *pa = 3;  // 올바르지 않은 문장, const 는 int* 앞에 있으므로 value가 바뀌면 안된다.
  pa = &b;  // 올바른 문장
  return 0;
}
```

<br>

```c
#include <stdio.h>
int main() {
  int a;
  int b;
  int* const pa = &a;

  *pa = 3;  // 올바른 문장
  pa = &b;  // 올바르지 않은 문장, const 는 pa 앞에 있으므로 주소값이 바뀌면 안된다.

  return 0;
}
```

<br>

```c
#include <stdio.h>
int main() {
  int a;
  int b;
  const int* const pa = &a;

  *pa = 3;  // 올바르지 않은 문장, 다 안된다!
  pa = &b;  // 올바르지 않은 문장, 다 안된다!

  return 0;
}
```

<br>

## 포인터의 덧셈

<br>

- 포인터는 주소값을 더하거나 빼서 원하는 value를 확인할 수 있다.
- 이때 주소값은 형에 따라 더하는 값이 다르다
  - int 4byte
  - char 1byte
  - double 8byte

```c
#include <stdio.h>
int main() {
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int* parr;

  parr = &arr[0];

  printf("arr[3] = %d , *(parr + 3) = %d \n", arr[3], *(parr + 3)); // 두 값은 동일하다!
  return 0;
}
```
