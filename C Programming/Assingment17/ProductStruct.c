//Product (id, name, quantity, price)

#include<stdio.h>

struct Product
{
	int id;
	char name[15];
	int qnty;
	int price
};
void displayProduct(struct Product cal);
struct Product createProduct();

int main()
{
	struct Product d1,d2;
	d1=createProduct();
	displayProduct(d1);
	d2=createProduct();
	displayProduct(d2);
}

void displayProduct(struct Product cal)
{
	printf("id - %d\nname - %s\nquantity - %d\nprice-%d",cal.id,cal.name,cal.qnty,cal.price);
	printf("total price: %d\n",cal.qnty*cal.price);
}

struct Product createProduct()
{
	struct Product cal;
	scanf("%d",&cal.id);
	scanf("%s",cal.name);
	scanf("%d",&cal.qnty);
	scanf("%d",&cal.price);
	return cal;
}