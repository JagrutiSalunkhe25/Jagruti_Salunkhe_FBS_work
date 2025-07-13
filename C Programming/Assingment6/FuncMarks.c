//marks

#include<stdio.h>

void mark();

int main()
{
	mark();
}

void mark()
{
	int marks;
	printf("enter marks :");
	scanf("%d",&marks);
		
	if(marks>=75)
	{
	      printf("distintion");	
	}
	else
	{
		if(marks>=65)
		{
			printf("first class");
		}
		else
		{
			if(marks>=55)
			{
			printf("second class");	
			}
			else
			{
				if(marks>=40)
				{
					printf("pass class");
				}
				else
				{
					printf("fail");
				}
			}
		}
	}	
}
