#include<stdio.h>

// Find the Sum of nth Odd Numbers (between start to end)

int main()
{
    int i,start,end,sum=0;

    printf("Enter the Starting Point : ");
    scanf("%d",&start);

    printf("Enter the Ending Point : ");
    scanf("%d",&end);

    printf("\nThe Odd Numbers are : ");

    for(i=start; i<=end; i++){
        printf("%d ",(2*i-1));
        sum+=(2*i-1);
    }

    printf("\nThe Sum of Odd Numbers is : %d",sum);

    return 0;
}