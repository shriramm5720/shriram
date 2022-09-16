#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;

    fp=fopen("aa1.txt","r");
    char s[100];
    char ch;
    int i=0;
    while((ch=fgetc(fp)!=EOF))
    {
        s[i++]=ch;
    }
    s[i]=='\0';
    printf("%c",(s[0]-32));
    i=1;
    while(s[i]!='\0')
    {
        if(s[i]==" ")
        {
            i++;
            printf("%c",(s[i])-32);
        }else
        {
            printf("%c",s[i]);
            i++;
        }
    }
    fclose(fp);

return 0;
}
