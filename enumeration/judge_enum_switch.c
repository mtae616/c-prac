#include <stdio.h>

enum MasterYiSkill {
  AlphaStrike = 1,
  Meditation,
  WujuStyle,
  Highlander
};

int main()
{
  enum MasterYiSkill skill;
  skill = Meditation;
  switch (skill)
  {
  case AlphaStrike:
    printf("일격 필살\n");
    break;
  
  default:
    break;
  }

  return 0;
}