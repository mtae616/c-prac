#include <stdio.h>

enum VayneSkill {
  Tumble = 1,
  SilverBolts,
  Condemn,
  FinalHour
};

int main()
{
  enum VayneSkill skill;

  skill = Tumble;

  switch (skill)
  {
  case Tumble:
    printf("구르기 \n");
    break;
  case SilverBolts:
    printf("은화살 \n");
    break;
  case Condemn:
    printf("선고\n");
    break;
  case FinalHour:
    printf("결전의 시간\n");
    break;
  default:
    break;
  }

  return 0;
}