#include<stdio.h>

// Find the Area of the Triangle 

int main()
{
    float b,h,a;

    printf("Enter the Value of Base of the Triangle : ");
    scanf("%f",&b);

    printf("Enter the Value of Height of the Triangle : ");
    scanf("%f",&h);

    a = (b*h)/2;

    printf("\nThe Value of Area of the Triangle is : %.3f",a);

    return 0;
}