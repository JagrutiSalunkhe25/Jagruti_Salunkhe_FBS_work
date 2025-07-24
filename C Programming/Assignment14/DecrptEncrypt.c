#include<stdio.h>

int main()
{
	char str[10];
	printf("enter string : ");
	gets(str);
	encrypt(str);
	decrypt(str);
}

void encrypt(char* str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(i%2==0)
		{
			str[i]=str[i]+20;
		}
		else
		{
			str[i]=str[i]+30;
		}
		
		i++;
	}
	printf("encrypted string is : %s\n",str);

}

void decrypt(char* str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(i%2==0)
		{
			str[i]=str[i]-20;
		}
		else
		{
			str[i]=str[i]-30;
		}
		
		i++;
	}
	i=0;
//	while(str[i]!='\0'){
//		if(str[i]=='\t'){
//			printf("#");
//		}
//		i++;
//	}
	printf("decypted string is : %s\n",str);
}