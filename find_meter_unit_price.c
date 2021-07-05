#include<stdio.h>

// To Calculate the Meter Unit Price by giving months

int main()
{
    float watt,day,Watt_Hour,rate;
    printf("Enter the Watt : ");
    scanf("%f",&watt);

    printf("Enter the Day : ");
    scanf("%f",&day);

    Watt_Hour = watt*(day*24);

    printf("The Watt-Hour is : %f",Watt_Hour);

    printf("\nThe unit is : %f",Watt_Hour/1000);

    printf("\nEnter the Price Rate of Your Meter : ");
    scanf("%f",&rate);

    printf("The Total Payable Amount is : %f",(Watt_Hour/1000)*rate);

    return 0;
}