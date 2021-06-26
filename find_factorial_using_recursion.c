#include<stdio.h>

// Find the Factorial of the Given Number using function

int factorial(int x){
    if(x==0 || x==1){
        return 1;
    }

    return x * factorial(x - 1);
}

int main()
{
    int num;
    
    printf("Enter the Number : ");
    scanf("%d",&num);

    int result = factorial(num);

    printf("\nThe Factorial of %d is : %d",num,result);

    return 0;
}