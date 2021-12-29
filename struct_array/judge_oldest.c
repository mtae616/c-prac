#include <stdio.h>
#include <stdlib.h>

struct Person
{
  char name[30];
  int age;
};


int main()
{
  
  struct Person *p[5];

  int min = 0;
  int index = 0;
  for(int i = 0; i < sizeof(p) / sizeof(struct Person *); i++){
    p[i] = malloc(sizeof(struct Person));
  }

  for(int i = 0; i < sizeof(p) / sizeof(struct Person *); i++){
    scanf("%s %d", p[i]->name, &p[i]->age);
  }

  min = p[0]->age;
  for (int i = 0; i < sizeof(p) / sizeof(struct Person *); i++){
    if(min < p[i]->age){
      min = p[i]->age;
      index = i;
    }
  }

  printf("%s \n", p[index]->name);

  for(int i = 0; i < sizeof(p) / sizeof(struct Person *); i++){
    free(p[i]);
  }

  return 0;
}