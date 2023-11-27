#include <stdio.h>
int main ()
{
    /* local variable definition */
    int i, j,range;
    printf("Enter Range");
    scanf("\n%d",&range);
  
    for(i=2; i<range; i++)
     {
        for(j=2; j <= (i/j); j++)
        
            if(!(i%j)) break;
            
        if(j > (i/j)) printf("%d is prime\n", i);
    }
    return 0;
    }
