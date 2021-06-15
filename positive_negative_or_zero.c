#include<stdio.h>

// Find that a Entered Number is Positive,Negative or Zero

int main()
{
    int num;

    printf("Enter the Value : ");
    scanf("%d",&num);

    if(num>0){
        printf("\nEntered Number is Positive");
    }
    else if(num<0){
        printf("\nEntered Number is Negative");
    }
    if(num==0){
        printf("\nEntered Number is Zero");
    }

    return 0;
}