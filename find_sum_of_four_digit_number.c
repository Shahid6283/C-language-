#include<stdio.h>

// Find the Sum of Four Digits Numbers

int main()
{
    int a,b,c,d,num,sum;

    printf("Enter the four digit number : ");
    scanf("%d",&num);

    a = num%10;
    num = num/10;

    b = num%10;
    num = num/10;

    c = num%10;
    num = num/10;

    d = num%10;

    sum = a+b+c+d;

    printf("\nThe Sum of Entered Four Digit Numbers is : %d",sum);

    return 0;
}