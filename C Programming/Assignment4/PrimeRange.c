//prime no in given range

#include<stdio.h>
int main()
{
  	 int fir,last,count=0;
	
	scanf("%d",&fir);
	scanf("%d",&last);
	
  	for(int j=fir;j<=last;j++){
  		count=0;
  		for(int i=1;i<=j;i++)
	  	 {
	  	 	if(j%i==0)
	  	 	{
	  	 		count++;
			}	
		}
		
		if(count==2)
   	   {
		printf("%d ",j);
    	}
	  } 
	  	 
	
	
}