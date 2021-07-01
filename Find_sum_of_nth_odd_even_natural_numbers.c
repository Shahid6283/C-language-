#include<stdio.h>

// Find the Sum of Given Odd,Even and Natural Numbers(from starting point to ending point) using loops 

int main()
{
    int start,end,i,j,k,st,star;
    int sum=0,sum2=0,sum3=0; 

    printf("Enter the Starting Point : ");
    scanf("%d",&start);

    printf("Enter the Ending Point : ");
    scanf("%d",&end);

    st = start;
    star = start;

    // Compute the sum of given Odd Numbers 
    if(st%2==0){
        st = st + 1;
    }

    for(i=st; i<=end; i=i+2){
        sum+=i;
    }

    printf("\nThe Sum of Odd Numbers From %d to %d is : %d",star,end,sum);

    printf("\n");

    // Compute the sum of given Even Numbers

    if(start%2!=0){
        start = start + 1;
    }

    for(j=start; j<=end; j=j+2){
        sum2+=j;
    }

    printf("\nThe Sum of Even Numbers From %d to %d is : %d",star,end,sum2);

    // Compute the Sum of given Natural Numbers
    printf("\n");

    for(k=st; k<=end; k=k+1){
        sum3+=k;
    }

    printf("\nThe Sum of Natural Numbers From %d to %d is : %d",star,end,sum3);

    return 0;
}