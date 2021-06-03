#include<stdio.h>

// Find the quotient and the remainder

int main()
{
    int dividend,divisor,quotient,remainder;

    printf("Enter the Value of Dividend : ");
    scanf("%d",&dividend);

    printf("Enter the Value of Divisor : ");
    scanf("%d",&divisor);

    // Compute the quotient
    quotient = dividend/divisor;

    // Compute the remainder
    remainder = dividend%divisor;

    printf("\nThe Value of Quotient is : %d",quotient);
    printf("\nThe Value of Remainder is : %d",remainder);

    return 0;
}