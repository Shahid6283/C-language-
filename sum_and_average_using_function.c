#include<stdio.h>

// Find the Sum and Average of three numbers using function

void sumandavg(int a,int b,int c){
    float sum = a+b+c;
    float avg = sum/3;
    printf("\nThe Sum is : %f",sum);
    printf("\nThe Average is : %f",avg);

}

int main()
{
    int n1,n2,n3;

    printf("Enter the First Number : ");
    scanf("%d",&n1);

    printf("Enter the Second Number : ");
    scanf("%d",&n2);

    printf("Enter the Third Number : ");
    scanf("%d",&n3);

    sumandavg(n1,n2,n3);

    return 0;
}