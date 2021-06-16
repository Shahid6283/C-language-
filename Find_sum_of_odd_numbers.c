#include<stdio.h>

// Find the Sum of Odd Numbers between the (starting to end)

int main()
{
    int i,start,end,sum=0,a=0;

    printf("Enter the Starting Point : ");
    scanf("%d",&start);

    printf("Enter the Ending Point : ");
    scanf("%d",&end);

    if(start%2==0){
        start = start + 1;
    }

    printf("\nThe Odd Numbers are : ");

    for(i=start; i<=end; i=i+2){
        printf("%d ",i);
        sum+=i;
    }

    printf("\nThe Sum of Odd Numbers between %d to %d is : %d",start,end,sum);

    return 0;
}