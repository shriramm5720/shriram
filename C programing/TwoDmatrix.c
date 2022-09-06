#include<stdio.h>
int main()
{
int a[2][3],b[3][2];
printf("Enter the AAAAAAAAA  Number\n");
for(int i=0;i<2;i++)
{
    for(int j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }

}


printf(" Enter  BBBB Matrix Show**********************\n");
for(int i=0;i<3;i++)
{
    for(int j=0;j<2;j++)
    {
        scanf("%d",&b[i][j]);
    }

}


printf(" AAAA Matrix Show**********************\n");

for(int i=0;i<2;i++)
{
    for(int j=0;j<3;j++)
    {
        printf("%d\t",a[i][j]);
    }
     printf("\n");
}
printf(" AAAA Matrix Show**********************\n");

for(int i=0;i<3;i++)
{
    for(int j=0;j<2s;j++)
    {
        printf("%d\t",b[i][j]);
    }
     printf("\n");
}
return 0;
}
