//student details

#include<stdio.h>


struct Student
{
	int rollNo;
	char name[20];
	int marks;
};
int main()
{
	struct Student s1,s2,s3;
	
	printf("enter stud 1 details \n");
	scanf("%d",&s1.rollNo);
	scanf("%s",s1.name);
	scanf("%d",&s1.marks);
	
	printf("enter stud 2 details \n");
	scanf("%d",&s2.rollNo);
	scanf("%s",s2.name);
	scanf("%d",&s2.marks);
	
	printf("enter stud 2 details \n");
	scanf("%d",&s3.rollNo);
	scanf("%s",s3.name);
	scanf("%d",&s3.marks);
	
	printf("student 1 details :\n");
	printf("roll no : %d  name : %s  marks : %d\n",s1.rollNo,s1.name,s1.marks);
	
	printf("student 2 details :\n");
	printf("roll no : %d  name : %s  marks : %d\n",s2.rollNo,s2.name,s2.marks);
	
	printf("student 3 details :\n");
	printf("roll no : %d  name : %s  marks : %d\n",s3.rollNo,s3.name,s3.marks);
}