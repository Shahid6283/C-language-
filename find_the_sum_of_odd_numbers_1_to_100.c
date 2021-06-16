#include<stdio.h>

// Find the Sum of all Odd Numbers between 1 to 100

int main()
{
    int n=1,sum=0;

    do
    {
        sum+=n;
        n = n+2;
    } while (n<=100);
    
    printf("The Sum of %d Odd Numbers is : %d",n-1,sum);

    return 0;
}