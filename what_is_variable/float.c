#include <stdio.h>
int main() 
{
  float a = 3.141592f; // f 안 붙이면 double로 인식함
  double b = 3.141592;
  printf("a : %f \n", a);
  printf("b : %f \n", b);

  return 0;
}