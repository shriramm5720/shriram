#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int cnt=0;
    fp=fopen("s2.txt","r");
    if(fp==NULL)
    {
        printf("No Data");

    }else
    {
        while((ch=fgetc(fp))!=EOF)
        {
            cnt++;
        }
    }
    printf("char count=%d",cnt);
    fclose(fp);
    return 0;
}

