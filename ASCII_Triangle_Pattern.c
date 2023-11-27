
#include <stdio.h>

int main()
{
int i,j,k,ascii=65,t,c;

printf("enter range \n");
scanf("%d",&t);

for(i=1; i<=t; i++)
{
for(j=t; j>=i; j--)
{
printf("  ");
}

for(k=1; k<=i; k++)
{

if(ascii==91)
ascii=97;


if(ascii>122)
ascii=178;
printf("%2c",ascii++);
}
printf("\n");
}
return 0;
}
