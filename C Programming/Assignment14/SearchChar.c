//search char

#include <stdio.h>

int myStrChr(char* str, char ch);

int main()
{
    char str[10];
    char ch;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter char: ");
    scanf(" %c", &ch); 

    int res = myStrChr(str, ch);

    if(res != NULL)
        printf("Char found : %d",res);
    else
        printf("Char not found\n");

    return 0;
}

int myStrChr(char* str, char ch)
{
    int i = 0,last=0;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            last=i;
        }
        i++;
    }

    return last; 
}
