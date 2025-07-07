
//pattern  square 

#include<stdio.h>
int main()
{
	 int no=5;
	 for(int i=1;i<=10;i++)
	 {
	 	for(int j=1;j<=10;j++)
	 	{
	 		if((i==1 ||i==10||j==1 || j==10)||i==j )
	 		    printf("* ");
	 		else
			 printf("  ") ;   
		 }
		 printf("\n");
	 }
}