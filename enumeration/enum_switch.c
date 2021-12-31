#include <stdio.h>

enum LuxSkill {
  LightBinding = 1,
  PrismaticBarrier,
  LucentSingularity,
  FinalSpark
};

int main()
{
  enum LuxSkill skill; // 열거형 변수 선언

  skill = LightBinding;

  switch (skill)
  {
  case LightBinding:
    printf("LightBinding\n");
    break;
  
  case PrismaticBarrier:
    printf("PrismaticBarrier");
    break;
  case LucentSingularity:
    printf("LucentSingularity");
    break;
  case FinalSpark:
    printf("FinalSpark");
    break;
  default:
    break;
  }

  return 0;
};