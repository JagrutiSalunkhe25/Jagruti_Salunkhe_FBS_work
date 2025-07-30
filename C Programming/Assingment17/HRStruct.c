//HR (id, name, salary, commission)

#include<stdio.h>


struct HR
{
	int id;
	char name[20];
	int sal;
	int cosm;
};
int main()
{
	struct HR s1,s2;
	
//	printf("enter emp 1 details \n");
	s1.id=101;
	strcpy(s1.name, "jags");
	s1.sal=100000;
	s1.cosm=15000;
	printf("enter emp 2 details \n");
	scanf("%d",&s2.id);
	scanf("%s",s2.name);
	scanf("%d",&s2.sal);
	scanf("%d",&s2.cosm);
	
	printf("student 1 details :\n");
	printf("id : %d  name : %s  salary : %d allowance :%d\n",s1.id,s1.name,s1.sal,s1.cosm);
	
	printf("student 2 details :\n");
	printf("id : %d  name : %s  salary : %d allowance :%d\n",s2.id,s2.name,s2.sal,s2.cosm);
}