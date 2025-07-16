//print prime no from array

#include<stdio.h>
int main()
{
	int arr[6],num,count=0;
	for(int i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("\n");
	
	
	
	for(int i=0;i<6;i++)
  	 {
  	 	num=arr[i];
  	 	
  	 	if(num==2)
  	 	{
  	 		printf("2 ");
		   }
  	 	for(int j=1;j<num;j++)
  	 	{
  	 			if(num%j==0)
  	 	{
  	 		count++;
		}	
	}
	if(count==2)
	    {
		printf("%d ",num);
	    }
	    	
}
  	    	
}

	