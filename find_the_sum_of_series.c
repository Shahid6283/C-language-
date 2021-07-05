#include<stdio.h>
#include<math.h>

// Find the Sum of Series (1x + 2x + 3x + ........ + nx)

int main()
{
    int n,x,i,j;
    int sum=0;
    
    printf("Enter the Value of n : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){

        for(j=i; j<=i; ++j){

        sum+=pow(i,j);
        
        }
    }

    printf("\nThe Sum is : %d",sum);

    return 0;
}