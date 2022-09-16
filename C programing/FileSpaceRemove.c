#include<stdio.h>
int main()
{
    FILE *fp1,*fp2;
    char ch;
    fp1=fopen("aa1.txt","r");
    fp2=fopen("aa2.txt","w");

    while((ch=fgetc(fp1))!=EOF)
    {
        if(!isspace(ch))
        {
            fputc(ch,fp2);
            printf("%c",ch);
        }
    }
    fclose(fp1);
    fclose(fp2);
    return 0;

}
