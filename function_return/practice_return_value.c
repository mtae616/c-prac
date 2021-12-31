#include <stdio.h>
#include <stdbool.h>

int getMana()
{
  return 222;
}

float getAttackSpeed()
{
  return 0.679000;
}

bool isMelle()
{
  return true;
}

int main()
{
  int mana;
  float attackSpped;
  bool melee;

  mana = getMana();
  attackSpped = getAttackSpeed();
  melee = isMelle();

  printf("%d \n", mana);
  printf("%f \n", attackSpped);
  printf("%d\n", melee);

  return 0;
}