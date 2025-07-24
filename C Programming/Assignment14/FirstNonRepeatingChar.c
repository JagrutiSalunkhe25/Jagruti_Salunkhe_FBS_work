//waf to find first non repeating char in a string

//eg swiss
//output:w

#include<stdio.h>
int main()
{
	char str[50];
	scanf("%s",str);
	
	int i=0,c;
	while(str[i]!='\0')
	{
		int j=i+1;
		c=0;
		while(str[j]!='\0')
		{
		    
			if(str[i]==str[j])
			{
				c++;
			}
			j++;
		}
		if(c==0)
		{
			printf(" %c",str[i]);
			break;
		}
	
		i++;	
	}

}