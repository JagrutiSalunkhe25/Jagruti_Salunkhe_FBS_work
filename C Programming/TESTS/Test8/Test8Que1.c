//promp pw and username nd display 4 digit random no nd verify it

#include<stdio.h>
int main()
{
	char pwd[20]="jagruti@200";
	char uname[20]="Jagruti25";
	char pwd1[20],uname1[20];
	
	printf("enter the password : ");
	scanf("%s",pwd1);
	
	printf("enter the username : ");
	scanf("%s",uname1);
	
	int res=strcmp(pwd,pwd1);
	if(res==0)
	{
		printf("password is correct !\n");
	}
	else
	    printf("password is wrong !\n");
	
	int res1=strcmp(uname,uname1);
	if(res1==0)
	{
		printf("username is correct !\n");
	}
	else
	   printf("username is wrong !\n");
	
	
	if(res==0 && res1==0)
	{
		int cap=2551*2+1;
		int ver;
		printf("your captcha is : %d\n",cap);
		printf("enter the captcha to verify :\n ");
		scanf("%d",&ver);
		
		if(cap==ver)
		{
			printf("person verified !!!\n");
		}
		else
		{
			printf("wrong captcha entered .");
		}
	}
	
}