//strncasecmp

#include<stdio.h>
#include<string.h>
int myStrnCaseCmp(char* str1, char* str2,int);

int main()
{
    char str1[10], str2[10];
    int n;

    printf("Enter string1: ");
    scanf("%s", str1);

    printf("Enter string2: ");
    scanf("%s", str2);
    
    scanf("%d",&n);

    int res = myStrnCaseCmp(str1, str2,n);

    printf("%d",res);
}

int myStrnCaseCmp(char* str1, char* str2,int n)
{
    int i = 0;
    while(i<n && ( str1[i] != '\0' || str2[i] != '\0'))
    {
        char ch1 = str1[i];
        char ch2 = str2[i];

        if(ch1 >= 'A' && ch1 <= 'Z')
        {
        	ch1 = ch1+32;
		}    
        if(ch2 >= 'A' && ch2 <= 'Z')
        {
        	ch2 = ch2+32;
		}
		i++;
        if(ch1 != ch2)
            return -1;
        
		
    }
 return 0;
    
}
