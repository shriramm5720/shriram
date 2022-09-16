#include<stdio.h>
int main()
{
    FILE *fp1;
    char name[10];
    fp1=fopen("aa1.txt","w");
    //fp2=fopen("aa2.txt","w");
    printf("Enter the Name");
    scanf("%s",name);
    fwrite(name,sizeof(10),1,fp1);

    fp1=fopen("aa1.txt","r");
     fread(name,sizeof(10),1,fp1);
     printf("name=%s",name);

    fclose(fp1);
    //fclose(fp2);
    return 0;

}

