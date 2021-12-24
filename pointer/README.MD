## 포인터 : 메모리 상에 위치한 특정한 데이터의 (시작) 주소값을 보관하는 변수

<br>

- <a href="https://www.youtube.com/watch?v=38rmjrc5iAM&list=PLiZvlxkcLhakQwbPjkyfuHFy1IVG-VXrP&index=16&ab_channel=%EA%B9%80%EC%84%B1%EC%97%BD">참고 유튜브</a>
- <a href="https://blog.naver.com/tipsware/221553375054">참고 블로그</a>

<br>

- 포인터에도 형이 있다

- 메모리를 효과적으로 사용하는 기술

- 메모리 관리 - 간접 주소 지정 방식

- 자신이 사용하고 싶은 메모리의 '주소'를 저장하고 있는 메모리가 포인터

- 32bit -> 4btye 64bit -> 8byte

- int 형 데이터의 주소값을 저장하는 포인터와, char 형 데이터의 주소값을 저장하는 포인터가 서로 다르다.

- 'ptr = ' : 포인터 변수의 값(가리키는 대상의 주소)이 변경

- '\*ptr = ' : 포인터가 가리키는 대상의 값이 변경

- 포인터를 사용하여 간접 주소 방식으로 값을 대입하는 이유?
  - 모든 변수가 같은 함수에 선언되는 것은 아니기 때문
  - 일반 변수는 다른 함수에 있는 변수 사용 불가
  - 포인터 변수는 다른 함수에 선언된 변수의 값을 읽거나 변경 가능

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

```c
short birthday; // short형 변수 birthday 선언
short *ptr; // 포인터가 가리키는 대상의 크기가 2바이트인 포인터 변수를 선언, 포인터의 크기는 32 -> 4바이트, 64 -> 8바이투
ptr = &birthday; // birthday 변수의 주소를 ptr 변수에 대입
*ptr = 1042 // ptr에 저장된 주소에 가서 값 1042를 대입, 즉 birthday = 1042
```

<br>

## 간접 주소 지정 방식(포인터)으로 다른 함수에 선언한 변수 사용하기

<br>

```c
#include <stdio.h>

void Test(short data){
  short soft = 0;
  soft = data; // soft = 5;
  tips = 3; // 오류 발생
}

void main()
{
  short tips = 5;
  Test(tips);
}

```

```c
#include <stdio.h>
void Test(short *ptr){
  short soft = 0;
  soft = *ptr; // soft = tips;
  *ptr = 3; // tips = 3;
}

void main()
{
  short tips = 5;
  Test(&tips);
}

```

<br>

## Swap

<br>

```c
#include <stdio.h>
void Swap(int *pa, int *pb){
  int temp = *pa;
  *pa = *pb;
  *pb = temp;
}
void main()
{
  int start = 96, end=5;
  printf("before: start = %d, end = %d \n", start, end);
  if(start > end){
    Swap(&start, &end);
  }
  printf("after: start = %d, end = %d \n", start, end);
}
```

<br>

## 상수 포인터 (const pointer)

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

## 포인터 변수의 주소 연산

<br>

### 사용할 메모리의 범위를 기억하는 방법

- 시작 주소와 끝 주소를 기억하는 것
  - 시작 주소와 끝 주소로 메모리 범위를 기억하려면 총 8 바이트 필요
  - 이 방법은 포인터에 해당하지 않음
- 시작 주소와 사용할 크기를 기억하는 것
  - 시작 주소와 사용할 크기로 메모리 범위를 기억하려면 총 8 바이트 필요
  - 사용할 메모리 크기는 명령문에 포함되어있기 떄문에 자신이 사용할 메모리의 시작 주소만 기억하면 된다. (int {대상의 크기} \*p {시작주소 기억})
  - 포인터도 자신이 가리킬 대상에 대해 사용할 범위는 저장하지 않고 사용할 메모리의 시작 주소만 기억하면 된다.

<br>

### 포인터의 덧셈

<br>

- 포인터 변수에 저장된 주소도 일반 변수처럼 연산 가능
- 주소를 1만큼 증가시킨다는 의미가 일반 수학 연산과 다르다
- 포인터는 주소값을 더하거나 빼서 원하는 value를 확인할 수 있다.
- 포인터에서 + 1의 의미는 그 다음 데이터의 주소를 의미
- <b>포인터 주소 연산</b> : 포인터 변수가 가진 주소를 연산하면 자신이 가리키는 대상의 크기만큼 연산
- 이때 주소값은 형에 따라 더하는 값이 다르다
  - int 4byte
  - char 1byte
  - double 8byte

<br>

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

<br>

### void \* 형 포인터

<br>

- 포인터 변수가 가리키는 대상의 크기를 모를 때 void \* 형을 사용
- 사용할 메모리의 시작 주소만 알고 끝 주소를 모를 때 void \* 형 포인터 사용

<br>

```c
int data = 0;
void *p = &data; // data의 시작 주소를 저장함
*p = 5; // 오류 대상 메모리의 크기가 정해지지 않음
```

<br>

- void \* 은 주소를 사용할 때 반드시 '사용할 크기'를 표기해야 한다.

<br>

```c
int data =0;
void *p = &data;
*(int *)p = 5; //형 변환 문법을 사용하여 대상의 크기를 4바이트로 정함
```

<br>

- void \* 형 포인터
  - void \* 는 자신이 사용할 대상의 크기 지정을 잠시 미룰 수 있다는 장점을 가짐
  - main 함수의 지역 변수의 주소를 받아 1을 대입하는 MyFunc 함수

<br>

```c
void MyFunc(char *p_char, short *p_short, int *p)int)
{
  if(p_char != Null) *p_short = 1; // NULL
  else if(p_short != NULL) *p_short = 1; // data = 1
  else *p_int = 1;
}

void main()
{
  short data = 5;
  MyFunc(NULL, &data, NULL);
}
```

<br>

```c
void MyFunc(void *p, char flag)
{
  // flag에 전달된 값에 따라 형 변환하여 전달된 주소에 1을 대입
  if(flag == 0) *(char *)p = 1; // flag가 0 이면 char 형
  else if(flag == 1) *(short *)p = 1; // flag가 1이면 short 형
  else *(int *)p = 1; // flag가 2면 int 형
}
void main()
{
  short data = 5;
  // data 변수는 short 형이기 때문에 short * 를 의미하는 1을 함께 전달
  MyFunc(&data, 1);
}
```
