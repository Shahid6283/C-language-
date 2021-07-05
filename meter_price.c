#include<stdio.h>

// To Calculate the Amount of meter by giving meter rate and the unit of the meter

int main()
{
    float rate,unit,price;
    
    printf("Enter the Price Rate of Your Meter : ");
    scanf("%f",&rate);

    printf("Enter the Unit of Your Meter : ");
    scanf("%f",&unit);

    price = rate*unit;

    printf("The Total Payable Amount is : %f",price);

    return 0;
    
}
