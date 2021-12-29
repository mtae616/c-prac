#include <stdio.h>
#include <stdlib.h>

typedef struct _Point3d
{
  float x;
  float y;
  float z;
} Point3d;

int main()
{
  Point3d *p1 = malloc(sizeof(Point3d));

  p1->x = 10.000000;
  p1->y = 20.000000;
  p1->z = 30.000000;

  printf("%f %f %f\n", p1->x, p1->y, p1->z);

  free(p1);
  
  return 0;
}