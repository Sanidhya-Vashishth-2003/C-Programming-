#include<stdio.h>

int main()
{
float a;
printf("enter radius of the circle\n");
scanf("%f",&a);
float d,c;
c= 3.1400000*a*a;
d= 2*3.14000000*a;
printf("the area of circle is %f",c);
printf("the circumference of circle is %f",d);

    return 0;
}