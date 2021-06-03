#include<stdio.h>

// Interchange the Two Variables without using third Variable

int main()
{
    int a,b;

    printf("Enter the Value of a : ");
    scanf("%d",&a);

    printf("Enter the Value of b : ");
    scanf("%d",&b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("\nAfter Interchanging the Value of a is : %d",a);
    printf("\nAfter Interchanging the Value of b is : %d",b);

    return 0;
}