#include<stdio.h>

// Find the Sum of nth Odd Numbers

int main()
{
    int n,i,sum=0;

    printf("Enter the Number : ");
    scanf("%d",&n);

    printf("\nThe Odd Numbers are : ");

    for(i=1; i<=n; i++){
        printf("%d ",(2*i-1));
        sum+=(2*i-1);
    }

    printf("\nThe Sum of %d Odd Numbers is : %d",n,sum);

    return 0;
}