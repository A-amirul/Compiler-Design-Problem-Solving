
#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter the number of n:\n");
    scanf("%d",&n);
    for(col=1;col<=n;col++)
    {

    {
        for(row=1;row<=col;row++)
            printf("%d",row);
    }
    printf("\n");
    }
    for(col=n;col>=1;col--)
    {

    {
        for(row=n;row>=col;row++)
            printf("%d",row);
    }
    printf("\n");
    }




    return 0;
}
