#include<stdio.h>

// find the area of the circle 

int main()
{   
    float r,a;

    // Take the radius of the circle from the user 
    printf("\nEnter the radius of the circle=");
    scanf("%f",&r);

    // To find the area of the circle 
    a=3.14*r*r;
    printf("\nThe area of the circle is = %f",a);    // This will print the area of the circle 

    return 0;
}