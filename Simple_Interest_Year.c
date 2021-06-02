#include<stdio.h>

// To Calculate the Simple Interest 
// For Years

int main()
{
    float p,r,y,result,total;

    printf("Enter the Principal Value : ");
    scanf("%f",&p);

    printf("Enter the Rate of Interest : ");
    scanf("%f",&r);

    printf("Enter Number of Years : ");
    scanf("%f",&y);

    result = (p*r*y)/100;

    printf("\nSimple Interest is : %f",result);

    total = p+result;

    printf("\n\nNow the Total Amount is : %f",total);

    return 0;
}