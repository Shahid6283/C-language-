#include<stdio.h>

// Find the sum of given nth Even Numbers

int main()
{
    int num,sum=0,i;

    printf("Enter the Number : ");
    scanf("%d",&num);

    for(i=0; i<=num; i=i+2){
        sum+=i;
    }

    printf("\nThe Sum of Even Numbers between 1 to %d is : %d",num,sum);

    return 0;
}