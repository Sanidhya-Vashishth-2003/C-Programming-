#include<stdio.h>
#include<conio.h>
int main()
{
float a,b;

printf("enter the temperature in farhenite\n");
scanf("%f",&a);
b=(a-32)*5/9;

printf(" %f Fahrenheit of temperature in celcius is%f",a,b);


    return 0;
}