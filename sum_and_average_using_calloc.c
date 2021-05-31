#include<stdio.h>
#include<stdlib.h>

// Find the Sum and the Average of Nth Numbers using calloc(dynamic memory allocation)

int main()
{
    float *ptr;
    int n;
    float sum=0,avg;

    printf("How many Elements you want to Enter : ");
    scanf("%d",&n);

    ptr = (float *) calloc(n,sizeof(int));

    for(int i=0; i<n; i++){
        printf("Enter Element %d : ",i+1);
        scanf("%f",ptr+1);
        sum+= *(ptr+1);
    }

    printf("\nThe Sum is %.3f",sum);

    avg = (sum/n);
    printf("\nThe Average is : %.3f",avg);

    free(ptr);

    return 0;
}