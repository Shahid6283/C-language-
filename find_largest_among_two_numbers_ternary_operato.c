#include<stdio.h>

// Find the Largest Number Among the Two Numbers using Ternary Operator

int main()
{
    int a,b,c;

    printf("Enter the First Number : ");
    scanf("%d",&a);

    printf("Enter the Second Number : ");
    scanf("%d",&b);

    c=(a>b)? a:b;
    printf("\nThe Largest Number is : %d",c);

    return 0;
}