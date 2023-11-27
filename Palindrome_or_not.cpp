# include<stdio.h>
int main()
{
	int num,temp,rem,rev=0;
	printf (" \n ENTER ANY NUMBER \n");
	scanf("%d",&num);
	temp =num;
	while (temp>0)

		{
		rem =temp%10;
		rev =rev*10+rem;
		temp =temp/10;
	}
	  if (num == rev)
	 printf (" \n d is palindrome number \n");
	 else
	   printf ("\n is not a palindrome number \n");
return 0;
	 
}
