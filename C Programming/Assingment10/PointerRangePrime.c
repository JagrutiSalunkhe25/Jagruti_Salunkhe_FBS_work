//prime no in given range

#include<stdio.h>

void prime(int*fir,int*last);
int main()
{
  	 int fir,last;
	
	scanf("%d",&fir);
	scanf("%d",&last);
	prime(&fir,&last);
	
}

void prime(int*fir,int*last)
{
	int count=0;
	for(int j=*fir;j<=*last;j++){
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