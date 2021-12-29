#include <stdio.h>
#include <string.h>
 
int main()
{
    int cnt = 0;
    char s[1001];
    scanf("%[^\n]s", s);
    
    char *ptr = strtok(s, " .,");
    
    while(ptr != NULL)
    {
        if(strcmp(ptr, "the") == 0)
        {
            cnt++;
        }
        ptr = strtok(NULL, " .,");
    }
    
    printf("%d\n", cnt);
    return 0;
}
