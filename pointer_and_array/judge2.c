#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int m, n;
  int mine_counter;
  scanf("%d %d", &m, &n);
  char **mal = malloc(sizeof(char *) * m);

  for(int i = 0; i < m; i++){
    mal[i] = malloc(sizeof(char) * (n+1));
    memset(mal[i], 0, sizeof(char) * (n + 1));
  }

  for(int i = 0; i < m; i++){
    scanf("%s", mal[i]);
  }

  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      if(mal[i][j] == '*'){
        printf("%c", mal[i][j]);
      } else{
        mal[i][j] = 0;

        for(int y = i-1; y <= i + 1; y++){
          for(int x = j - 1; x <= j +1; x++){
            if(y < 0 || x < 0 || y >= m || x>= n){
              continue;
            } else if(mal[y][x] == '*') {
              mine_counter += 1;
            }
          }
        }
        mal[i][j] = mine_counter;
        printf("%d", mal[i][j]);
        mine_counter = 0;
      }
    }
    printf("\n");
  }

  for(int i = 0; i < m; i++){
    free(mal[i]);
  }
  free(mal);


  return 0;
}