#include<stdio.h>

// Print the Multiplication Table of Given Number

int main()
{
    int num;
    
    printf("Enter the Table you want to print : ");
    scanf("%d",&num);

    printf("\n-------  The Multiplication Table of %d is  -------\n",num);

    for(int i=0; i<10; i++){
        printf("\n%d X %d = %d",num,i+1,(i+1)*num);
    }

    return 0;
}