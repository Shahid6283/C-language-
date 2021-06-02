#include<stdio.h>

// Calculate the Simple Interest 
// For Months

int main()
{
    float p,r,m,result,total;

    printf("Enter the Principal Value : ");
    scanf("%f",&p);

    printf("Enter the Rate of Interest : ");
    scanf("%f",&r);

    printf("Enter Number of Months : ");
    scanf("%f",&m);

    result = ((p*r*(m/12))/100);

    printf("\nSimple Interest is : %f",result);

    total = p+result;

    printf("\n\nNow the Total Amount is : %f",total);

    return 0;
}