#include<stdio.h>
int main()
{
    FILE *fp1,*fp2;
    char ch;
    //int cnt=0;
    fp1=fopen("s2.txt","r");
    fp2=fopen("s3.txt","w");
    if(fp1==NULL)
    {
        printf("No Data");

    }else
    {
        while((ch=fgetc(fp1))!=EOF)
        {
          fputc(ch,fp2);
        }
    }
    printf("No of Vowel=%d",cnt);
    fclose(fp);
    return 0;
}
