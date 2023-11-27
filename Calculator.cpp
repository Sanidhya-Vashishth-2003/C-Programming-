#include <stdio.h>
int main()
{ 
  int a,b;
   int choice;
   printf("Enter your choice\n1.ADD\n2.Subtract\n3.Multiply\n4.Divide");
   scanf("%d",&choice);
   switch (choice)
   {
   	case 1:
   		printf("Enter Value of A&B");
   		scanf("%d%d",&a,&b);
 printf("\n%d",a+b);
	   break;
	case 2:  {
		printf("Enter Value of A&B");
   		scanf("%d%d",&a,&b);
	    printf("\n%d",a-b);
         break;
	}
	
    case 3:
	   {printf("Enter Value of A&B");
   		scanf("%d%d",&a,&b);
	  printf("\n%d",a*b);
	   break;
	   }
	   case 4:
	   	{printf("Enter Value of A&B");
   		scanf("%d%d",&a,&b);
	  printf("\n%d",a/b);
	   break;
		   }
	    default:
	    	printf("Wrong Choice");

   }
   
    return 0;

}
