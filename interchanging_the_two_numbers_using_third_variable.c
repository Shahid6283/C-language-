#include<stdio.h>

// Interchanging the two Variables using third Variable

int main()
{
    int a,b,temp;

    printf("Enter the Value of a : ");
    scanf("%d",&a);

    printf("Enter the Value of b : ");
    scanf("%d",&b);

    temp = a;
    a = b;
    b = temp;
    
    printf("\nAfter Interchanging the Value of a is : %d",a);
    printf("\nAfter Interchanging the Value of b is : %d",b);

    return 0;
}