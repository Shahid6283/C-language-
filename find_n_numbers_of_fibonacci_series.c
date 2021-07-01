#include<stdio.h>

// Print the nth Fibonacci Series and find the Sum of nth Fibonacci Series 

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

    for(i=1; i<=num-2; i++){
        c= a+b;
        sum+=c;
        printf("%d   ",c);
        a=b;
        b=c;
    }

    printf("\n\nThe Sum of %d Fibonacci Series is : %d",num,sum+1);

    return 0;
}