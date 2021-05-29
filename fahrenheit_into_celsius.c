#include<stdio.h>

// convert fahrenheit into celsius

int main()
{   

    float far,celsius;

    // Take the value of the Fahrenheit from the user 
    printf("\n Enter the value of far is =");
    scanf("%f",&far);

    // Convert the Fahrenheit into Celsius
    celsius = (far-32)*5/9;
    printf("\n The value of the celsius is = %f",celsius);   // This will print the value of the celsius

    return 0;
}