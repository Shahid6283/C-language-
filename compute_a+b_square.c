#include<stdio.h>

// compute (a+b)square

int main()
{
    int a,b;
    int result;

    printf("Enter the Value of a : ");
    scanf("%d",&a);

    printf("Enter the Value of b : ");
    scanf("%d",&b);

    result = ((a*a)+(b*b)+(2*a*b));

    printf("\nValue of Result is : %d",result);

    return 0;
}