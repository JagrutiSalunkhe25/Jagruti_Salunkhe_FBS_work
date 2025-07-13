//Can vote or not

#include<stdio.h>

void canVote();
int main()
{
   	canVote();
}

void canVote()
{
	int age=15;
	
	if(age>18)
	{
		printf("can vote");
	}
	else
	{
		printf("cannot vote");
	}
}