#include <stdio.h>

struct Vecto3 // 3차원 벡터 좌표
{
  union { // 익명 공동체
    struct { // 익명 구조체
      float x; // x
      float y; // y
      float z; // z
    };
    float v[3]; // 좌표를 배열로 저장
  };
};

int main()
{
  struct Vecto3 pos;

  for(int i = 0; i < 3; i++){
    pos.v[i] = 1.0f;
  }

  printf("%f %f %f \n", pos.x, pos.y, pos.z);

  return 0;
}