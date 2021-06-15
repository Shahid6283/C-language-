#include<stdio.h>

// Reverse the Entered Digits 

int main()
{
    long int num,rev=0,a;

    printf("Enter the Number : ");
    scanf("%ld",&num);

    while (num!=0)
    {
        a = num%10;
        rev = rev * 10 +a;
        num = num/10;
    }

    printf("\nThe Reversed Digits is : %ld",rev);

    return 0;
}
