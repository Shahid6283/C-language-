#include<stdio.h>

// Find the Sum of Series of (1 + 1/2 + 1/3 + ......... + 1/n)

int main()
{
    int num,i;
    float sum=0;

    printf("Enter the Number : ");
    scanf("%d",&num);

    for(i=1; i<=num; i++){
        sum+=1.0/i;
    }

    printf("\nThe Sum is : %f",sum);

    return 0;
}