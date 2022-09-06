#include<stdio.h>
int main()
{
int a[3][3].b[3][3],sum [3][3],sum=0;
printf("Enter the Number\n");
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
       // sum+=a[i][j];
    }

}
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        scanf("%d",&b[i][j]);
       // sum+=a[i][j];
    }

}


printf("Matrix  a  Show**********************\n");
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        printf("%d\t",a[i][j]);
    }
     printf("\n");
}

printf("Matrix  b Show**********************\n");
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        printf("%d\t",a[i][j]);
    }
     printf("\n");
}
printf("Sum of Matrix Show**********************\n");

printf("Sum=%d",sum);
return 0;
}
