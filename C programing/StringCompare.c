#include<stdio.h>
#include <string.h>
int main()
{
 char str1[10],str2[10];
 int result;
 printf("Enter the first String\n");
 scanf("%s",str1);
 printf("Enter the second String\n");
 scanf("%s",str2);
 int length=strlen(str1);
 printf("%d\n",length);
 if(strcmp(str1,str2)==0)
 {
 printf("String are Equal");
 }else{
 printf("String are Not Equal");
 }

  return 0;
}
