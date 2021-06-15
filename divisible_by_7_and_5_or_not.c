#include<stdio.h>

// Find that a given Number is divisible by 5 and 7 or not 

int main()
{
    int num;

    printf("Enter the Number : ");
    scanf("%d",&num);

    if(num%7==0 && num%5==0){
        printf("\n%d is divisible by 7 and 5",num);
    }
    else{
        printf("\n%d is not divisible by 7 and 5",num);
    }

    return 0;
}