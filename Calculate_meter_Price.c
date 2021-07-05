#include<stdio.h>

// To Calculate the Meter-Unit and the Price 

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

    printf("\nEnter the Price Rate of Your Meter : ");
    scanf("%f",&rate);

    printf("The Total Payable Amount is : %f",(Watt_Hour/1000)*rate);

    return 0;
}