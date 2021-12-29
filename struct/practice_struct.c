#include <stdio.h>

struct Cordinate {
  int x;
  int y;
};


int main()
{
    struct Cordinate p1;
    p1.x = 10;
    p1.y = 20;

    printf("%d %d\n", p1.x, p1.y);

    return 0;
}