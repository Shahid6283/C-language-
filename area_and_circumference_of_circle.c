#include<stdio.h>

// Find the Area and the Circumference of the Circle 

int main()
{
    float r;
    float area,cir;
    float pi = 3.14159;   // Use this value of pi to find the more occurate Answer 

    printf("Enter the Radius of the Circle : ");
    scanf("%f",&r);

    area = pi*r*r;

    printf("\nThe Area of the Circle is : %f",area);

    cir = 2*pi*r;

    printf("\nThe Circumference of the Circle is : %f",cir);

    return 0;
}