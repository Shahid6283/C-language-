#include<stdio.h>

// Print the nth Fibonacci Series to Certain Number and find the Sum of given Fibonacci Series 

int main()
{
    int num,i,a,b,c,sum=0;

    printf("Enter the Number : ");
    scanf("%d",&num);

    printf("\n");
    printf("The Fibonacci Series is : \n");

    a=0;
    b=1;

    printf("%d   %d   ",a,b);

    c=a+b;

    while(c<=num){
        sum+=c;
        printf("%d   ",c);
        a=b;
        b=c;
        c=a+b;
    }

    printf("\n\nThe Sum of %d Fibonacci Series is : %d",num,sum+1);

    return 0;
}