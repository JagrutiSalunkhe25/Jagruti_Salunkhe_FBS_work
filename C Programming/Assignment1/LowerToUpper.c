//uppercase or lowercase

#include<stdio.h>

int main()
{
	char ch='k';
	int x=(int)ch;
	
	if(x>=65 && x<=90)
	{
		printf("uppercase");
	 } 
	 else if(x>=97 && x<=122)
	 {
	 	printf("lowercase");
	 }
	 else
	 {
	 	printf("invalid character");
	 }
}