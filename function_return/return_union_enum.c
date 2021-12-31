#include <stdio.h>

union Box{
  short candy;
  float snack;
  char doll[8];
};

enum BOX_TYPE {
  BOX_PAPER = 0,
  BOX_WOOD,
  BOX_PLASTIC
};

union Box getBox() // Box 공용체를 반환하는 getBox 함수 정의
{
  union Box b; // 공용체 변수 선언
  b.candy = 10;
  return b;
};

enum BOX_TYPE getBoxType() // BOX_TYPE 열거형을 반환하는 getBoxType 함수 정의
{
  return BOX_WOOD;
}

int main()
{
  union Box box;
  enum BOX_TYPE boxType;

  box = getBox();
  boxType = getBoxType();

  printf("%d \n", box.candy);
  printf("%d \n", boxType);

  return 0;
}