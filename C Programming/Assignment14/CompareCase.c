//strcasecmp

#include <stdio.h>

int myStrCaseCmp(char* str1, char* str2);

int main()
{
    char str1[100], str2[100];

    printf("Enter string1: ");
    scanf("%s", str1);

    printf("Enter string2: ");
    scanf("%s", str2);

    int res = myStrCaseCmp(str1, str2);

    printf("%d",res);
}

int myStrCaseCmp(char* str1, char* str2)
{
    int i = 0;
    while(str1[i] != '\0' || str2[i] != '\0')
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
        if(ch1 == ch2)
            return 0;
        else
            return -1;
        
		i++;
    }

    
}
