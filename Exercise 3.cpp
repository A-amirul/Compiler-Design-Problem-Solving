#include <stdio.h>
#include <string.h>

int main()
{
    char inp[100];
    gets(inp);
    int i;
    bool flag = 0;
    for(i=0; i<strlen(inp); i++)
    {
        if(flag == 0)
        {
            if(inp[i]=='"')
            {
                flag = 1;
                continue;
            }
        }
        if(flag == 1)
        {
            if(inp[i]=='"')
            {
                break;
            }
            printf("%c", inp[i]);
        }
    }
    int puts();
    return 0;
}
