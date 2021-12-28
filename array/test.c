#include <stdio.h>

int main()
{
  // float scores[10] = { 67.2f, 84.3f, 97.0f, 87.1f, 71.9f, 63.0f, 90.1f, 88.0f, 79.7f, 95.3f };
  // float sum = 0.0f;
  // float average;

  // for(int i = 0; i < sizeof(scores) / sizeof(float); i++){
  //   sum += scores[i];
  // }

  // average = sum / (sizeof(scores) / sizeof(float));

  // printf("%f \n", average);

  int decimal = 0;
  int binary[4] = {1,1,0,1};
  int position = 0;

  for(int i = sizeof(binary) / sizeof(int) - 1; i >= 0; i--)
  {
    if (binary[i] == 1)
        decimal += 1 << position;
    position++;
  }


  printf("%d \n", decimal);

  return 0;
}