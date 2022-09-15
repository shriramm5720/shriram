#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("s1.txt","r");
    if(fp==NULL)
    {
        pintf("No Data");

    }else
    {
        while((ch=fgetc(fp))!=EOF)
        {
            if(ch=='a')
            printf("%c",ch);
        }
    }
    fclose(fp);
    return 0;
}
