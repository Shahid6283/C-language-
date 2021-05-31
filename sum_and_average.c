#include<stdio.h>

// Find the Sum and the Average of three Numbers 

int main()
{
    int n1,n2,n3;
    float sum,average;

    printf("Enter the First Number : ");
    scanf("%d",&n1);

    printf("Enter the Second Number : ");
    scanf("%d",&n2);

    printf("Enter the Third Number : ");
    scanf("%d",&n3);

    sum = n1+n2+n3;
    printf("\nThe Sum is : %.3f",sum);

    average = sum/3;
    printf("\nThe Average is : %.3f",average);

    return 0;
}