#include<stdio.h>

// To Calculate the Unit of the Meter 

int main()
{
    float watt,hours,Watt_Hour,rate;
    
    printf("Enter the Watt : ");
    scanf("%f",&watt);

    printf("Enter the Time(in Hours) : ");
    scanf("%f",&hours);

    Watt_Hour = watt*hours;

    printf("The Watt-Hour is : %f",Watt_Hour);

    printf("\nThe unit is : %f",Watt_Hour/1000);

    return 0;
}