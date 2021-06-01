#include<stdio.h>

// To find the Volume of the Sphere and the Circumference of the Sphere by giving its Radius

int main()
{
    float r,cir,v;
    float pi = 3.1415926;   // Use this value of pi to find the more occurate Answer 

    printf("Enter the Radius of the Sphere : ");
    scanf("%f",&r);

    v = (4*pi*r*r*r)/3;

    printf("\nThe Volume of the Sphere is : %f",v);

    cir = 2*pi*r;

    printf("\nThe Circumference of the Sphere is : %f",cir);

    return 0;
}