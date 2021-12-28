  int position = 0;
  for (int i = sizeof(binary) / sizeof(int) - 1; i >= 0; i--)
  {
      if (binary[i] == 1)
          decimal += 1 << position;

      position++;
  }