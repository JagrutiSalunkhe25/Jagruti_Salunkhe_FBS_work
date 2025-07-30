//Date (date, month, year)

#include<stdio.h>

struct Date
{
	int day;
	int month;
	int year;
};
void displayDate(struct Date cal);
struct Date createDate();

int main()
{
	struct Date d1;
	d1=createDate();
	displayDate(d1);
}

void displayDate(struct Date cal)
{
	printf("%d : %d : %d",cal.day,cal.month,cal.year);
}

struct Date createDate()
{
	struct Date cal;
	scanf("%d",&cal.day);
	scanf("%d",&cal.month);
	scanf("%d",&cal.year);
	return cal;
}