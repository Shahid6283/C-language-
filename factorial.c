#include<stdio.h>

// Find the Factorial of the Given Number using for loop

int main()
{
    int num,sum=1,i;
    
    printf("Enter the Number : ");
    scanf("%d",&num);

    for(i=1; i<=num; i++){
        sum*=i;
    }

    printf("\nThe Factorial of %d is : %d",num,sum);

    return 0;
}