#include<stdio.h>
int main()
{
FILE *fp1,*fp2,*fp3;
char ch;
fp1=fopen("aa1.txt","r");
fp2=fopen("aa2.txt","a");
fp3=fopen("aa3.txt","w");
while((ch=fgetc(fp1)!=EOF))
{
    fputc(ch,fp2);
    fputc(ch,fp3);
}
fclose(fp1);
fclose(fp2);
fclose(fp3);
return 0;

}
