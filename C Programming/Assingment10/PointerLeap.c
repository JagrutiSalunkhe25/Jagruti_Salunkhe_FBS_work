//pointer leap year


void leapYr(int* year);
int main()
{
	int year=2000;
	leapYr(&year);
}

void leapYr(int* year)
{
	
	

	if(*year%4==0 && *year%100!=0 || *year %400==0)
	{
		printf("year is leap yr");
	}
	else
	{
		printf("year is not leap year");
	}
}