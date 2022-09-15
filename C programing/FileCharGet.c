#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("s2.txt","r");
    if(fp==NULL)
    {
        printf("No Data");

    }else
    {
        while((ch=fgetc(fp))!=EOF)
        {
            printf("%c",ch);
        }
    }
    fclose(fp);
    return 0;
}
