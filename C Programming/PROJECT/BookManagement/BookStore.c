
#include<stdio.h>

typedef struct Book
{
	int BookID; 
	char BookName[20];
	char AthrName[20]; 
	char Ctgry[20];
    float Price;
	float Rating;
}Book;

void AddBook(Book* arr,int* c);
void RemoveBook(Book* arr,int* c);
void displayBook(Book* arr,int* c);
void FindBookID(Book* arr,int* c);
void FindBookName(Book* arr,int* c);
void authorBook(Book* arr,int* c);
void bookCategory(Book* arr,int* c);
void updateBookData(Book* arr,int* c);
void sortPrice(Book* arr,int* c);

int main()
{
	Book Demo[200];
	int c=0,ch;
	printf("Book Management System \n");
	while(1)
	{
		printf("1.Add book  2.Remove Book  3.Search Book  4.Search Author \n 5.Search Category  6.Update Book Data 7.Display Sorted Book  8.Display All Books 9.EXIT\n");
	printf("enter your choice : \n");
	scanf("%d",&ch);
	if(ch==13)
	{
		break;
	}
	switch(ch)
	{
		case 1 : AddBook(Demo,&c);
		         break;
		case 2 : RemoveBook(Demo,&c); 
		         break;
		case 3 : displayBook(Demo,&c) ;
		         break; 
	    case 4 : FindBookID(Demo,&c);
		         break;	
        case 5 : FindBookName(Demo,&c);
		         break;	
		case 6 : authorBook(Demo,&c);
		         break;
		case 7 : bookCategory(Demo,&c);
		         break;	
		case 8 : updateBookData(Demo,&c);
		         break;
		case 9 : sortPrice(Demo,&c);
		         break;		 			 	 			 				 		        
		default : printf("invalid");
		         break;		      
	}
	}
	
}

void AddBook(Book* arr,int* c)
{
	printf("enter book id : \n");
	scanf("%d",&arr[*c].BookID);
	while(getchar() != '\n');
	printf("enter book name : \n");
	gets(arr[*c].BookName);
	printf("enter author name : \n");
	gets(arr[*c].AthrName);
	printf("enter category : \n");
	gets(arr[*c].Ctgry);
	printf("enter price : \n");
	scanf("%f",&arr[*c].Price);
	printf("enter ratings : \n");
	scanf("%f",&arr[*c].Rating);
	
	(*c)++;
}


void RemoveBook(Book* arr,int* c)
{
	int id,start=0;
	printf("enter the book id to remove : ");
	scanf("%d",&id);
	for(int i=0;i<*c;i++)
	{
		if(arr[i].BookID==id)
		{
			start=i;
			break;
		}
	}
	
	for(int i=start;i<*c-1;i++)
	{
		arr[i]=arr[i+1];
	}
	(*c)--;
}

void displayBook(Book* arr,int* c)
{
	for(int i=0;i<*c;i++)
	{
		printf("book id is :%d \n",arr[i].BookID);
		printf("book name is :%s \n",arr[i].BookName);
		printf("author name is :%s \n",arr[i].AthrName);
		printf("category is : %s\n",arr[i].Ctgry);
		printf("price is : %f \n",arr[i].Price);
		printf("rating : %f\n",arr[i].Rating);
		printf("--------------------------------------------------");
	}
}

void FindBookID(Book* arr,int* c)
{
	int id,start=0;
	printf("enter the book id to find : ");
	scanf("%d",&id);
	for(int i=0;i<*c;i++)
	{
		if(arr[i].BookID==id)
		{
			start++;
			printf("book id is :%d \n",arr[i].BookID);
			printf("book name is :%s \n",arr[i].BookName);
			printf("author name is :%s \n",arr[i].AthrName);
			printf("category is : %s\n",arr[i].Ctgry);
			printf("price is : %f \n",arr[i].Price);
			printf("rating : %f\n",arr[i].Rating);
			printf("--------------------------------------------------");
			break;
		}
		
	}
	if(c==0)
	{
		printf("book id not found ");
	}
}

void FindBookName(Book* arr,int* c)
{
	char name[20];
	printf("enter the book name to find : ");
	scanf("%s",name);
	for(int i=0;i<*c;i++)
	{
		int res=strcmp(arr[i].BookName,name);
		if(res==0)
		{
			c++;
			printf("book id is :%d \n",arr[i].BookID);
			printf("book name is :%s \n",arr[i].BookName);
			printf("author name is :%s \n",arr[i].AthrName);
			printf("category is : %s\n",arr[i].Ctgry);
			printf("price is : %f \n",arr[i].Price);
			printf("rating : %f\n",arr[i].Rating);
			printf("--------------------------------------------------");
			break;
		}
		
	}
	if(c==0)
	{
		printf("book name not found ");
	}
}

void authorBook(Book* arr,int* c)
{
	char name[20];
	printf("enter the author name to find : ");
	scanf("%s",name);
	for(int i=0;i<*c;i++)
	{
		int res=strcmp(arr[i].AthrName,name);
		if(res==0)
		{
			c++;
			printf("book id is :%d \n",arr[i].BookID);
			printf("book name is :%s \n",arr[i].BookName);
			printf("author name is :%s \n",arr[i].AthrName);
			printf("category is : %s\n",arr[i].Ctgry);
			printf("price is : %f \n",arr[i].Price);
			printf("rating : %f\n",arr[i].Rating);
			printf("--------------------------------------------------\n");
			
		}
		
	}
	if(c==0)
	{
		printf("book name not found ");
	}
}

void bookCategory(Book* arr,int* c)
{
	char name[20];
	printf("enter the category name to find : ");
	scanf("%s",name);
	for(int i=0;i<*c;i++)
	{
		int res=strcmp(arr[i].Ctgry,name);
		if(res==0)
		{
			c++;
			printf("book id is :%d \n",arr[i].BookID);
			printf("book name is :%s \n",arr[i].BookName);
			printf("author name is :%s \n",arr[i].AthrName);
			printf("category is : %s\n",arr[i].Ctgry);
			printf("price is : %f \n",arr[i].Price);
			printf("rating : %f\n",arr[i].Rating);
			printf("--------------------------------------------------\n");
			
		}
		
	}
	if(c==0)
	{
		printf("book name not found \n");
	}
}

void updateBookData(Book* arr,int* c)
{
    float nPrice,nRate;
	int id;
    printf("enter book id to update : ");
    scanf("%d",&id);
	printf("enter new Bookprice\n: ");
	scanf("%f",&nPrice);
	printf("enter new Rating \n: ");
	scanf("%f",&nRate);
	
	
	for(int i=0;i<*c;i++)
	{
		if(id==arr[i].BookID)
		{
			arr[i].Price=nPrice;
        	arr[i].Rating=nRate;
			
			printf("book id is :%d \n",arr[i].BookID);
			printf("book name is :%s \n",arr[i].BookName);
			printf("author name is :%s \n",arr[i].AthrName);
			printf("category is : %s\n",arr[i].Ctgry);
			printf("price is : %f \n",arr[i].Price);
			printf("rating : %f\n",arr[i].Rating);
			printf("--------------------------------------------------\n");
			break;
		}
		
	}
}

void sortPrice(Book* arr,int* c)
{
	Book temp;
	for(int i=0;i<*c-1;i++)
	{
		for(int j=i+1;j<*c;j++)
		{
			
			if(arr[i].Price > arr[j].Price)
			{
			    temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
			}
		}
	}
	
	printf("Books sorted by price:\n");
    for(int i = 0; i < *c; i++)
    {
        printf("Book ID: %d\n", arr[i].BookID);
        printf("Book Name: %s\n", arr[i].BookName);
        printf("Author Name: %s\n", arr[i].AthrName);
        printf("Category: %s\n", arr[i].Ctgry);
        printf("Price: %f\n", arr[i].Price);
        printf("Rating: %f\n", arr[i].Rating);
        printf("------------------------------------------\n");
    }
}

