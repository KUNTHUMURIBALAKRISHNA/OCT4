#include<stdio.h>
static int count=0;
int str_compare(char *str1, char *str2)
{
    if(*str1== '\0' && *str2== '\0')
    {
		return count;
    }
	if(*str1== *str2)
	{	
		str1++;
		str2++;
		count++;
		return str_compare(str1,str2);
	}
	else 
	{
	    printf("strings are not same\n");
		return -1; 
	}
}
int main()
{
    int var;
	char str1[20],str2[20];
	int (*fptr)(char*,char*)= &str_compare;
	printf("enter a value:\n");
	scanf("%d",&var);
	if((var%2)==0)
	{
	printf("Enter string 1:\n");
	scanf("%s",str1);
	printf("Enter string 2:\n");
	scanf("%s",str2);
	}
	else
	{
	    printf("unable to compare:\n");
	}
	if((*fptr)(str1,str2)>0)
        {
		printf("Strings are same\n");
        }
	else
        {
		printf("Strings are not same");
        }
}

