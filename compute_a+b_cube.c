#include<stdio.h>

// Compute (a+b) Whole Cube

int main()
{
    int a,b,result;

    printf("Enter the Value of a : ");
    scanf("%d",&a);

    printf("Enter the Value of b : ");
    scanf("%d",&b);

    result = ((a*a*a)+(b*b*b)+(3*a*a*b)+(3*a*b*b));

    printf("The Value of Result is : %d",result);

    return 0;
}