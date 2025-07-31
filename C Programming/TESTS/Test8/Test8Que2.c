#include <stdio.h>

void myStrRev(char* str);

int main()
{
    char str[100];
    printf("Enter string: ");
    scanf("%s", str); 
    myStrRev(str);
    printf("Reversed string: %s\n", str);
}

void myStrRev(char* str)
{
    int s = 0;
    int e = strlen(str)-1;

    while(s < e)
    {
        
        char temp = str[s];
        str[s] = str[e];
        str[e] = temp;
        s++;
        e--;
    }
}