#include<stdio.h>

// Convert Celsius into Fahrenheit 

int main()
{   
    float celsius,far;

    // Take the value of the celsius from the user 
    printf("\n Enter the value of the celsius ");
    scanf("%f",&celsius);

    // Convert the celsius into Fahrenheit
    far =(celsius*9/5) + 32;
    printf("\n The value in fahrenheit is %f",far);   // This will print the value of fahrenheit 

    return 0;
}