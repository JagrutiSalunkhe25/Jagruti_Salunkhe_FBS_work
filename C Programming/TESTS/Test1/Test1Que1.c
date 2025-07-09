
//convert hh,min,sec to sec 

#include<stdio.h>
int main()
{
	int hr=0,min=30,sec=0;
	
	int totalSec = hr*60*60+min*60+sec;
	
	printf("%d",totalSec);
}

