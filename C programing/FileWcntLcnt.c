#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int c=0,w=0,l=0;
    fp=fopen("s2.txt","r");
    if(fp==NULL)
    {
        printf("No Data");

    }else
    {
        while((ch=fgetc(fp))!=EOF)
        {
            c++;
            if(isspace(ch))
            {
                w++;
            }
            if(ch=='\n')
            {
                l++;
            }
        }
    }
    printf("No of char=%d\n",c);
    printf("No of word=%d\n",w);
    printf("No of Line=%d\n",l);
    fclose(fp);
    return 0;
}
