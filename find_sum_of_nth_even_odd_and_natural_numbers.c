#include<stdio.h>

// Find the Sum of nth Odd,Even and Natural Numbers using for loop

int main()
{
    int num,sum=0,Sum=0,Sum1=0,i,j,k;

    printf("Enter the Number : ");
    scanf("%d",&num);

    // Compute the Sum of given Odd Numbers
    for(i=1; i<=num; i++){
        sum+=((i*2)-1);
    }

    printf("\nThe Sum of %d Odd Numbers is : %d",num,sum);

    // Compute the Sum of given Even Numbers
    for(j=1; j<=num; j++){
        Sum+=(j*2);
    }

    printf("\nThe Sum of %d Even Numbers is : %d",num,Sum);

    // Compute the Sum of given Natural Numbers
    for(k=1; k<=num; k++){
        Sum1+=k;
    }

    printf("\nThe Sum of %d Natural Numbers is : %d",num,Sum1);

    return 0;
}