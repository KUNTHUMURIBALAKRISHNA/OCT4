#include <stdio.h>
int main()
{
    int var,n=5;
    printf("enter a variable:\n");
    scanf("%d",&var);
	if((var%10)==0)
	{
		goto pattern;
	}
	else 
	{
		printf("unable to print pattern\n");
		return -1;
	} 
	pattern:
	for(int i=1; i<= n; i++)
   {
	for(int j=1; j<= n; j++)
	{
		for(int j=0; j< n-i; j++)
		{
			printf(" ");
		}
		for(int k=0; k<i; k++)
		{
			printf("%c",(97+k));//or use char ch='a' and ('a'+k)
		}
		printf("\n");
		break;
	}
   }
	return 0;
}
'
