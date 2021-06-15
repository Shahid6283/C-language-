#include<stdio.h>

// Find the Sum of Digits of a given Numbers 

int main()
{
    long int num,a,sum=0;

    printf("Enter the Number : ");
    scanf("%ld",&num);

    while(num>0){
        a=num%10;
        sum+=a;
        num = num/10;
    }

    printf("The Sum of Entered Digits is : %ld",sum);

    return 0;
}