#include<stdio.h>

// Find that a Given Number is Even or Odd using if-else

int main()
{
    int num,remainder; 

    printf("Enter the Number : ");
    scanf("%d",&num);

    remainder = num%2;

    if(remainder==0){
        printf("\nThe Given Number is Even");
    }
    else{
        printf("\nThe Given Number is Odd");
    }

    return 0;
}