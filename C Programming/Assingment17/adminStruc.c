//Admin (id, name, salary, allowance)

#include<stdio.h>


struct Admin
{
	int id;
	char name[20];
	int sal;
	int allow;
};
int main()
{
	struct Admin s1,s2;
	
	printf("enter emp 1 details \n");
	scanf("%d",&s1.id);
	scanf("%s",s1.name);
	scanf("%d",&s1.sal);
	scanf("%d",&s1.allow);
	
	printf("enter emp 2 details \n");
	scanf("%d",&s2.id);
	scanf("%s",s2.name);
	scanf("%d",&s2.sal);
	scanf("%d",&s2.allow);
	
	printf("student 1 details :\n");
	printf("id : %d  name : %s  salary : %d allowance :%d\n",s1.id,s1.name,s1.sal,s1.allow);
	
	printf("student 2 details :\n");
	printf("id : %d  name : %s  salary : %d allowance :%d\n",s2.id,s2.name,s2.sal,s2.allow);
}