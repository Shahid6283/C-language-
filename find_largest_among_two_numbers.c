#include<stdio.h>

// Find the Largest Number Among two Numbers using if(conditional Operator)

int main()
{
    int a,b;

    printf("Enter the First Number : ");
    scanf("%d",&a);

    printf("Enter the Second Number : ");
    scanf("%d",&b);

    if(a>b){
        printf("\nThe Greatest Number is : %d",a);
    }

    if(a<b){
        printf("\nThe Greatest Number is : %d",b);
    }

    if(a==b){
        printf("\nBoth are Equal!");
    }

    return 0;
}