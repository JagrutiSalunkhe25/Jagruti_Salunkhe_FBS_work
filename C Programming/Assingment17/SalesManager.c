//SalesManager (id, name, salary, incentive, target)

#include<stdio.h>


struct SalesManager
{
	int id;
	char name[20];
	int sal;
	int inc;
	int tar;
};
int main()
{
	struct SalesManager s1,s2;
	
//	printf("enter emp 1 details \n");
	s1.id=101;
	strcpy(s1.name, "jags");
	s1.sal=100000;
	s1.inc=1000;
	s1.tar=1000000;
	printf("enter emp 2 details \n");
	scanf("%d",&s2.id);
	scanf("%s",s2.name);
	scanf("%d",&s2.sal);
	scanf("%d",&s2.inc);
	scanf("%d",&s2.tar);
	
	
	printf("SM1 1 details :\n");
	printf("id : %d  name : %s  salary : %d incentives :%d target :%d \n",s1.id,s1.name,s1.sal,s1.inc,s1.tar);
	
	printf("SM 2 details :\n");
	printf("id : %d  name : %s  salary : %d incentives :%d target :%d\n",s2.id,s2.name,s2.sal,s2.inc,s2.tar);
}