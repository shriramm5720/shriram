#include<stdio.h>
int main()
{
int a[3][3];
printf("Enter the Number\n");
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }

}


printf("Matrix Show**********************\n");
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        printf("%d\t",a[i][j]);
    }
     printf("\n");
}

/*printf("Transpose of Matrix Show**********************\n");
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        printf("%d\t",a[j][i]);
    }
     printf("\n");
}*/

printf("Transpose of Matrix Show**********************\n");

if(((a[1][1]==a[2][2] && a[1][1]==a[3][3]) && (a[1][2]==0 && a[1][3]==0)) &&(a[2][3]==0))
{
    printf("Yes");

}else
{
    printf("No");
}

return 0;
}
