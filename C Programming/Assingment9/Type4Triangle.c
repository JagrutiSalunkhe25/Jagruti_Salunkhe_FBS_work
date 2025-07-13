//type of triangle

#include<stdio.h>

int triangle(int a,int b,int c);

int main()
{
	int x,y,z;
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
	
	int ans=triangle(x,y,z);
	if(ans==1)
	{
		printf("equilateral");
	}
	else if(ans==2)
	{
		printf("scalene");
	}
	else if(ans==3)
	{
		printf("isoceles");
	}
	else
	{
		printf("invalid");
	}

}


int triangle(int a,int b,int c)
{
	if(a==b && b==c)
	{
		return 1;
	}
	else if(a!=b && b!=c && c!=a)
	{
		return 2;
	}
	else
	{
		return 3;
	}
}