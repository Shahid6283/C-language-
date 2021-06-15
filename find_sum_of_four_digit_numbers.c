#include<stdio.h>

// Find the Sum of Four Digits Numbers using for loop

int main()
{
    int a,num,sum=0;

    printf("Enter the four digit number : ");
    scanf("%d",&num);

    for(int i=0; i<4; i++){
        a = num%10;
        num = num/10;
        sum+=a;
    }

    printf("\nThe Sum is : %d",sum);

    return 0;
}