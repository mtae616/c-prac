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

<br>

## 배열과 포인터

### 배열 표기법과 포인터 표기법의 관계

<br>

- 배열과 포인터는 표기만 다를 뿐 문법 구조가 유사하다.
- 배열과 포인터는 표기법을 서로 바꿔 사용 가능

<br>

- 배열
  - [] 연산자 사용
  - 배열이 사용하는 메모리 그룹의 시작 주소 기준
  ```c
  char data[5];
  data[1] = 5;
  *(data + 1) = 5; // data[1] = 5 와 같다
  ```

<br>

- 포인터
  - \* 연산자 사용
  - 포인터 변수가 가리키는 메모리의 시작 주소 기준
  ```c
  char data;
  char *p = &data;
  *p = 3;
  p[0] = 3; // *p = 3 과 같다
  ```

<br>

### 배열 시작 주소

- 배열 변수의 이름은 배열의 시작 주소

<br>

```c
char data[4];
char *p = &data[0]; // 배열의 첫 번째 항목의 주소가 배열 전체의 시작 주소와 같음
// ->
char * p = &*(data + 0)
// -> +0 생략
char *p = &*data;
// ->  주소를 얻는 & 연산자와 주소를 지정하는 * 연산자는 서로 반대 개념의 연산자이기 때문에 서로 상쇄된다.
chr *p = data;
```

<br>

```c
& // -> 주소를 얻겠다
*data // -> data 가 가리키는 메모리

&(*data)
// ->
data
```

<br>

- 배열은 배열의 시작 주소를 기준으로 색인 작업된 요소의 위치를 계산
- 배열의 같은 요소를 반복적으로 사용하는 경우 효율리 떨어짐

```c
char data[5] = {1,2,3,4,5};
int i, sum = 0, select = 2;
// sum 변수에 data[select] (data[2]) 요소 값을 10번 더함
for(i = 0; i < 10; i++) sum = sum + data[select];
// ->
for(i = 0; i < 10; i++) sum = sum + *(data + select);
```

<br>

- 포인터로 배열의 주소를 저장하여 사용하기
- 지속적으로 사용되는 배열의 요소는 주소를 포인터 변수에 저장하여 사용

```c
char data[5] = {1,2,3,4,5};
int i, sum = 0, select = 2;
char *p = data + select; // char *p = &data[select]; 와 동일한 표현
for(i = 0; i < 10; i++) sum = sum + *p;
```

<br>

- 포인터를 배열로 선언

```c
char *p[5] // char *p1 ,*p2 ,*p3 ,*p4 ,*p5와 동일
```

- 포인터가 5개 선언된 것이기 때문에 p 배열의 크기는 20 / 40바이트
- 개별 포인터를 사용하려면 p[0], p[1], p[2] 와같이 사용
- 각 포인터가 가리키는 대상에 값을 읽거나 쓰고 싶다면 *p[0] *p[1] 등

<br>

### 포인터를 기준으로 배열과 합체하기

```c
char (*p)[5] // pointer를 5바이트짜리 메모리를 가리키게 한다, 배열이 아님 포인터임
```

```c
char data[3][5];
char (*p)[5];
p = data;
(*p)[1] = 3 // data[0][1] p가 가리키는 대상의 2번째 항목에 3을 대입
(*(p+1))[2] = 4 // data[1][2] p+1이 가리키는 대상의 3번째 항목에 4를 대입
(*(p+2))[4] = 5 // data[2][4] p+2가 가리키는 대상의 5번째 항목에 5를 대입
```

<br>

## 다차원 포인터

<br>

- 다차원 포인터 : 간접으로 여러 번 대상을 가리키는 포인터

- 차원은 '자신이 가리키는 대상'의 개수만큼 증가

<br>

### 다차원 포인터 정의하기

- 포인터 변수 선언 시 \* 키워드를 추가할 때마다 차원이 하나씩 증가

- \* 키워드를 두 개 이상 사용한 포인터가 '다차원 포인터'

- \* 키워드는 최대 7개 사용 가능

- 포인터 변수 선언 시 사용한 \* 키워드 개수만큼 포인터를 사용할 때 \* 연산자를 사용 가능

<br>

```c
char *p1; // 1차원 포인터 : p1, *p1
char **p2; // 2차원 포인터 : p2, *p2, **p2
char ***p3; // 3차원 포인터 : p3, *p3, **p3, ***p3
```

<br>

### 일반 변수의 한계와 다차원 포인터

- 4Byte 크기의 변수라면 포인터 변수가 아니더라도 주소 저장 가능

  ```c
  short data = 0;
  int my_ptr = (int)&data; // data 변수의 주소를 my_ptr에 저장하기 위해 형 변환. 정상적으로 주소가 저장됨
  *my_ptr = 3 // 오류 발생! 포인터 변수가 아니라 * 연산자 사용 불가.
  // 일반 변수에도 주소 값을 저장할 수는 있지만 자신이 저장하고 있는 주소에 가서 값을 읽거나 쓸 수 없다.
  ```

<br>

### 2차원 포인터의 선언과 사용

<br>

- \* 연산자를 최대 2개까지 사용 가능 (pp, \*pp, \*\*pp)

- 2차원 포인터는 주소 이동을 두 번 할 수 있다.
  ```c
  short **pp; // 2차원 포인터 변수 pp 를 선언
  ```
  <img src="https://img1.daumcdn.net/thumb/R1280x0/?scode=mtistory2&fname=https%3A%2F%2Fblog.kakaocdn.net%2Fdn%2FEyZ0D%2Fbtro6bQM8xF%2FZmYJvLBsbCv4Rsq6y5r2Jk%2Fimg.png">

<br>

- 2차원 포인터는 1차원 포인터의 주소 값을 저장한다.
  ```c
  short **pp, *p, data =3;
  p = &data; // data 변수의 주소 값이 포인터 변수 p 에 저장됨
  pp = &p; // 1차원 포인터 p의 주소 값이 2차원 포인터 pp 에 저장
  **p = 5;
  ```
  <img src="https://img1.daumcdn.net/thumb/R1280x0/?scode=mtistory2&fname=https%3A%2F%2Fblog.kakaocdn.net%2Fdn%2FAF0yt%2Fbtro13sdmeV%2F7A2M7aVOoABdnY2cNZfkWK%2Fimg.png">

<br>

```c
#include <stdio.h>
void main()
{
  short data = 3;
  short *p = &data; // data 변수의 주소 값을 1차원 포인터 p 에 저장
  short **p = &p; // 1차원 포인터 p의 주소 값을 2차원 포인터 pp 에 저장

  *p = 4; // data = 4

  **pp = 5; // data = 5
}
```

<br>

### 2차원 포인터가 가리키는 첫 대상이 일반 변수인 경우

```c
short **pp, data =3;
int my_ptr = (int)&data; // my_ptr 에는 정상적인 주소가 저장 됨
short **pp = (short **)&my_ptr;
**pp = 5; // data 변수의 값이 3에서 5로 변경됨, my_ptr이 정상적인 주소를 갖고 있기 때문에!
```

- 2 차원 포인터 변수가 가진 주소 값의 형식에 상관없이 4바이트 크기를 가지면 그 주소에 있는 변수의 값을 변경 가능

<br>

### 2차원 포인터가 가리키는 대상을 동적으로 할당하기

- 2차원 포인터는 1차원 포인터의 주소 값을 저장한다.

  ```c
  short **pp, data = 3;
  pp = (short **)malloc(4);
  // 4바이트 크기를 2차원 포인터가 가지게 되면 자동적으로 1차원 포인터의 의미를 띄게된다
  // pp = (short **)malloc(sizeof(short *)); pointer의 크기는 무적권 4/8바이트 ㅋㅋ

  *pp = &data; // data 변수의 주소 값을 두 번째 상자에 저장
  **pp = 5; // data 변수의 값이 3에서 5로 변경
  ```

<br>

### malloc 함수를 사용하여 2차원 포인터 구조 만들기

```c
#include <stdio.h>
#include <stdlib.h>

void main()
{
  short **pp;
  pp = (short **)malloc(sizeof(short *)); // 1차원 포인터 선언
  *pp = (short *)malloc(sizeof(short)); // 변수 메모리 선언

  **pp = 10;
  printf("**pp : %d", **pp);
  free(*pp); // 변수 메모리 없앰 얘를 꼭 먼저 없애야 됨
  free(pp); // 포인터 메모리 없앰
}
```

<br>

### 2차원 포인터가 가리키는 대상을 동적으로 할당하면 좋은 점

```c
short **pp = (short **)malloc(3 * sizeof(short *));
// 12바이트 (3 * 4) 크기로 메모리가 할당됨
// 1차원 포인터 3개 만들었다!
*pp = (short *)malloc(2 * sizeof(short));
// 4바이트 (2 * 2) 크디로 메모리가 할당됨
// 변수 2개!
```

<br>

### 매개변수에 포인터 변수 사용 예제

```c
#include <stdio.h>
#include <stdlib.h>

void GetMyData(int **q) // 포인터 변수 q에 p 변수의 주소를 저장
{
  *q = (int *)malloc(8);
  // 할당된 메모리의 주소 값을 포인터 q가 가리키는 p에 저장
}
void main()
{
  int *p; // p 는 초기화 되지 않아서 쓰레기 값을 저장함
  GetMyData(&p); // 포인터 변수 p의 주소 값을 매개 변수로 전달
  *p = 5; // 할당된 메모리의 첫 4바이트에 값 5를 넣음
  free(p); // 할당된 동적 메모리를 해제
}
```

<br>

### 여러 개의 1차원 포인터를 정적으로 할당하기

```c
short *p[100]; // short * 형식의 1차원 포인터를 100개 선언
```

- 배열의 요소가 100개, 각 요소의 크기는 4바이트

- 할당된 전체 메모리 크기는 400바이트

- p[0] ~ p[99] 까지 총 100개의 포인터 사용 가능

- 배열을 사용하여 p 변수의 크기가 400바이트로 고정됨

- 100개의 포인터를 모두 사용하지 않는다면 메모리가 낭비됨

<br>

```c
short **pp;
pp = (short **)malloc(sizeof(short *)); // 1차원 포인터 1개 할당
```

```c
int n;
short **p;
scanf("%d", &n); // 사용할 1차원 포인터의 개수를 사용자에게 입력 받음
pp = (short **)malloc(sizeof(short *) * n); // 1차원 포인터 n 개 할당
// 배열은 indexing을 상수로 해야 해서 불가!
```

<br>

### 2차원 배열과 동적 메모리 할당

<br>

[상세 코드](./2d_pointer.c)
