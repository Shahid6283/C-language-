#include<stdio.h>
#include<math.h>

// Find the Sum of Series (1 - 8 + 27 - 64 + ........ + n)

int main()
{
    int num,i,c,sum=0;

    printf("Enter the Number : ");
    scanf("%d",&num);

    for(i=0; i<=num; i++){
        c=i*i*i;
        sum+=pow(-1,(i+1))*c;
    }

    printf("\nThe Sum is : %d",sum);

    return 0;
}