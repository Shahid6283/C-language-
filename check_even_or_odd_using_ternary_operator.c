#include<stdio.h>

// Find that a Given Number is Even or Odd using Ternary Operator

int main()
{
    int num;

    printf("Enter the Number : ");
    scanf("%d",&num);

    (num%2==0)? printf("\n%d is Even",num) : printf("\n%d is Odd",num);

    return 0;
}