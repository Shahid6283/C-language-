#include<stdio.h>

// Reverse the Three Digits Number using for loop

int main()
{
    int a,rev=0,num;

    printf("Enter the Three digit number : ");
    scanf("%d",&num);

    for(int i=0; i<6; i++){
        a = num%10;
        rev=rev*10+a;
        num = num/10;
        
    }

    printf("\nThe Reversed Three Digit Number is : %d",rev);

    return 0;
}