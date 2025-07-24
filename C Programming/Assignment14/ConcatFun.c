//function for strcat 

#include<stdio.h>

char* concatString(char* ,char* ,int ,int );
int main()
{
	char str[100];
	char des[100];
	
	printf("enter string 1 : ");
	scanf("%s",str);
	printf("enter string 2 : ");
	scanf("%s",des);
	int size=strlen(str);
	int size1=strlen(des);
	printf("%s",concatString(str,des,size,size1));
	
}

char* concatString(char* str1,char* str2,int size,int size1)
{
	char fin[size+size1+1];
    
   for(int j=0;j<size;j++)
   {
   	   if(str1[j]!="\0")
      {
    	fin[j]=str1[j];
	  }
	  else
	  {
	      printf(" ");
	  }
	} 
    
	for(int k=0;k<size1;k++)
	{
		fin[k+size1]=str2[k];
	}
	printf("%s\n",fin);
	printf("\n---------");
	return fin;

}