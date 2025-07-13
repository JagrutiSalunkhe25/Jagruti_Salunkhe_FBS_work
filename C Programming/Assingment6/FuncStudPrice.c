//StudentPrice

#include<stdio.h>

void StudPrice();

int main()
{
	StudPrice();
}

void StudPrice()
{
	float price;
	printf("enter price:");
	scanf("%f",&price);
	
	char isStud;
	printf("enter 'y' if student or 'n'if not student :");
	scanf(" /c",&isStud);
	
	if(isStud=='y')
	{
		if(price>=500)
		{
			price=price-(price*0.2);
			printf("%f",price);
		}
		else
		{
			price=price-(price*0.1);
			printf("%f",price);
		}
	}
	else
	{
		if(price>=600)
		{
			price=price-(price*0.15);
			printf("%f",price);
		}
		else
		{
			printf("%f",price);
		}
	}
}