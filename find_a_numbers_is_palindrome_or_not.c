#include<stdio.h>

// Find that a Entered Number is Palindrome or Not
// A palindromic number is a number that remains the same when its digits are reversed 

int main()
{
    long long int num,b,rev=0,a;

    printf("Enter the Number : ");
    scanf("%lld",&num);

    b = num;

    while (b>0)
    {
        a = b%10;
        rev = rev * 10 +a;
        b = b/10;
    }

    printf("\nThe Reversed Digits is : %lld",rev);

    if(rev==num){
        printf("\nEnter Number is Palindrome");
    }
    else{
        printf("\nEnter Number is Not a Palindrome");
    }

    return 0;
}