#include<stdio.h>
int main()
{
    FILE *fp1;
    //char ch;
    float id;
    //int cnt=0;
    fp1=fopen("s2.txt","w");

    printf("Enter the id");
    scanf("%f",&id);
    fputc(id,fp1);


//    printf("No of Vowel=%d",cnt);
    fclose(fp1);
//    fclose(fp2);
    return 0;
}
