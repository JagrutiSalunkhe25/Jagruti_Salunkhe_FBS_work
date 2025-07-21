//prime no in given range

#include<stdio.h>

void prime(int*,int);
int main()
{
  	 int arr[10];
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	prime(arr,10);
	
}

void prime(int* ptr,int size)
{
	int count=0;
	for(int j=0;j<=10;j++){
  		count=0;
  		for(int i=1;i<=ptr[j];i++)
	  	 {
	  	 	if(ptr[j]%i==0)
	  	 	{
	  	 		count++;
			}	
		}
		
		if(count==2)
   	   {
		printf("%d ",ptr[j]);
    	}
	  } 
}