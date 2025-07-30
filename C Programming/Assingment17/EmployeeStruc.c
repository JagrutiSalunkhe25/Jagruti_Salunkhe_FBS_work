//Employee (id, name, salary)

#include<stdio.h>


struct Employee
{
	int id;
	char name[20];
	int sal;
};
int main()
{
	struct Employee s1,s2;
	
	printf("enter emp 1 details \n");
	scanf("%d",&s1.id);
	scanf("%s",s1.name);
	scanf("%d",&s1.sal);
	
	printf("enter emp 2 details \n");
	scanf("%d",&s2.id);
	scanf("%s",s2.name);
	scanf("%d",&s2.sal);
	
	printf("student 1 details :\n");
	printf("id : %d  name : %s  salary : %d\n",s1.id,s1.name,s1.sal);
	
	printf("student 2 details :\n");
	printf("id : %d  name : %s  salary : %d\n",s2.id,s2.name,s2.sal);
}