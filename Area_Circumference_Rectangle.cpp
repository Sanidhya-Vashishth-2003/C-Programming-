#include <stdio.h>

int main()
{
    int length, width, area, circumference;

    printf("Enter the length of the rectangle :");
    scanf("%d", &length);
    printf("Enter the width of the rectangle :");
    scanf("%d", &width);

    area = length * width;
    circumference = 2 *(length + width);

    printf("\nThe area of the rectangle is %d.", area);
    printf("\nThe circumference of the rectangle is %d.", circumference);

    return 0;
}
