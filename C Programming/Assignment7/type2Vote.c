//Can vote or not

#include<stdio.h>

int canVote();

int main()
{
	if(canVote())
	{
		printf("can vote");
	}
	else
	{
		printf("cannot vote");
	}
	
}

int canVote()
{
	int age=15;
	
	if(age>18)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}