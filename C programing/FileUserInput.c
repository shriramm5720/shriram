#include <stdio.h>
int main() {
	char name[50];
	int marks;
	//printf("Enter number of students: ");
	//scanf("%d",&n);
	FILE *fptr;
	fptr=(fopen("s2.txt","w"));

		printf("Enter name: ");
		scanf("%s",name);
		printf("Enter marks: ");
		scanf("%d",&marks);
		fprintf(fptr,"\nName: %s \nMarks=%d \n",name,marks);

	fclose(fptr);
	return 0;
}
