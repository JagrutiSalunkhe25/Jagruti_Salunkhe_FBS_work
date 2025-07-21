#include<stdio.h>
#include<string.h>

int main(){
	char str[50];
	char temp[50];
	char cpy[10];

printf("enter string1 : ");
scanf("%s",str);

printf("enter string2 : ");
scanf("%s",temp);

int ans=strcmp(temp,str);
printf("%d\n",ans);

strcpy(temp,str);
printf("%s\n",temp);

printf("%d\n",strlen(str));

printf("%s\n",strupr(str));
printf("%s\n",strlwr(str));

strcpy(cpy,str);
printf("%s\n",cpy);

strncpy(cpy,str,2);
printf("%s\n",cpy);

strcat(str,temp);
printf("%s\n",str);

strncat(str,temp,3);
printf("%s\n",str);

char *cpy=strchr(str,'l');
printf("%s\n",cpy);

char *cpy = strstr(str,temp);
printf("%s\n",cpy);

//upto how much elements are same 
printf("%d\n",strspn(str,"12345"));

printf("%d\n",strcspn(str,"12345"));

char *token = strtok(str, ",");
printf("%s",token);

 printf("%d\n", memcmp(str,temp, 2));



}
