#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1,*fp2;
    char c;
    fp1=fopen("input.txt","r");
    fp2=fopen("output1.txt","w");
    while((c=fgetc(fp1))!=EOF)
    {
        fputc(c,fp2);
    if(c == ' ')
    {
       while((c=fgetc(fp1))==' ')
       {

       }
       fputc(c,fp2);
    }

    }
    fclose(fp1);
    fclose(fp2);
    getch();

}
