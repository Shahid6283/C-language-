#include<stdio.h>

// Find the Sum and the Average using Arrays

int main()
{
    int arr[100];
    int num;
    float sum=0;

    printf("Enter How many Elements you want(between 1 to 100) : "); 
    scanf("%d",&num);

    for(int i=0; i<num; i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
        sum+= arr[i];
    }

    printf("\nThe Sum is : %.3f",sum);

    printf("\nThe Average is : %.3f",sum/num);

    return 0;
}