#include<stdio.h>

// Check that a Given Number is a Prime Number or not

int main()
{
    int num;
    printf("Enter the Number : ");
    scanf("%d",&num);

    if(num==2 || num==3){
        printf("\n%d is a Prime Number",num);
    }
    else if(num==1){
        printf("\n1 is Neither Prime nor Composite",num);
    }
    else if(num%2==0 || num%3==0){
        printf("\n%d is not a Prime Number",num);
    }
    else{
        printf("\n%d is a Prime Number",num);
    }

    return 0;
}