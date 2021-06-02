#include<stdio.h>

// Find the Largest Number Among the Three Numbers using Ternary Operator

int main()
{
    int a,b,c,d;

    printf("Enter the First Number : ");
    scanf("%d",&a);

    printf("Enter the Second Number : ");
    scanf("%d",&b);

    printf("Enter the Third Number : ");
    scanf("%d",&c);

    d=(a>b)? ((a>c)? a:c):((b>c)? b:c);
    printf("\nThe Largest Number is : %d",d);

    return 0;
}