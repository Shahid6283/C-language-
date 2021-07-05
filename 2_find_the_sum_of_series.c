#include<stdio.h>
#include<math.h>

// Find the Sum of Series (1 + x2 + x3 + ........ + xn)

int main()
{
    int n,x,i,sum=1;
    
    printf("Enter the Value of n : ");
    scanf("%d",&n);

    printf("Enter the Value of x : ");
    scanf("%d",&x);

    for(i=3; i<=n; i=i+2){
        sum+=pow(x,i);
    }

    printf("\nThe Sum is : %d",sum);

    return 0;
}