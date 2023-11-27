#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=6;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		if(j==i)
		printf("*");
		else 
		printf("  ");
		printf("\n");
	}
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=i;j++)
		if(i==j)
		printf("*");
		else 
		printf("  ");
		printf("\n");
	}
		for(i=6;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		if(j==i)
		printf("*");
		else 
		printf("  ");
		printf("\n");
	}
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=i;j++)
		if(i==j)
		printf("*");
		else 
		printf("  ");
		printf("\n");
	}
	return 0;
}
