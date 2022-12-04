#include<stdio.h>
void main ()
{
    char com[100];
    int i=2, a=0;

    //take input
    printf ("Enter the line of code \n");
    gets(com);

    //If condition
    if(com[0]=='/')
    {
        if(com[1]=='/')
        printf("It is a comment \n");

        else if (com[1]=='*')
        {
            for(i=2;i<=100;i++)
            {
                if(com[i]=='*' && com[i+1]=='/')
                {
                    printf("It is comment \n");
                    a=1;
                    break;
                }
                else
                continue;
            }
            if(a==0)
            {
                printf("It is not a comment \n");
            }

        }
        else
        printf("It is not a comment \n");

    }
    else
    printf("It is not a comment \n");

    return 0;
}
