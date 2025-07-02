//age range

#include<stdio.h>

int main()
{
	int age;
	printf("enter age :");
	scanf("%d",&age);
	
	if(age>=60)
	{
		printf("senior");
	}
	else
	{
		if(age>=20 && age<=59)
		{
			printf("adult");
		}
		else
		{
			if(age>=12 && age<=19)
			{
				printf("teenager");
			}
			else
			{
				if(age<12)
			    {
			    	printf("child");
			    }
			    else
			    {
			    	printf("invalid character");
				}
			    
			}
		}
	}
}