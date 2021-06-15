#include<stdio.h>

// Reverse the Three Digits Number

int main()
{
    int a,b,c,rev=0,num;

    printf("Enter the Three digit number : ");
    scanf("%d",&num);

    a = num%10;
    rev = a;
    num = num/10;

    b = num%10;
    rev = rev*10+b;
    num = num/10;

    c = num%10;
    rev = rev*10+c;

    printf("\nThe Reversed Three Digit Number is : %d",rev);

    return 0;
}