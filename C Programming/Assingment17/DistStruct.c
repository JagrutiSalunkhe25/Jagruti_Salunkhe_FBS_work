//Distance ( feet, inch)

#include<stdio.h>

struct Distance
{
	int feet;
	int inch;
};
void displayDist(struct Distance cal);
struct Distance createDist();

int main()
{
	struct Distance d1;
	d1=createDist();
	displayDist(d1);
	totalInch(d1);
	int res=totalInch(d1);
	printf("total inches are : %d \n",res);
}

void displayDist(struct Distance cal)
{
	printf("%d : %d \n",cal.feet,cal.inch);
}

struct Distance createDist()
{
	struct Distance cal;
	scanf("%d",&cal.feet);
	scanf("%d",&cal.inch);

	return cal;
}

int totalInch(struct Distance cal)
{
	int ans=cal.feet*12 + cal.inch;
	return ans;
}


