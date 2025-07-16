//Can vote or not

#include<stdio.h>

void canVote(int* age);
int main()
{
	int age=15;
   	canVote(&age);
}

void canVote(int* age)
{
	
	
	if(*age>18)
	{
		printf("can vote");
	}
	else
	{
		printf("cannot vote");
	}
}