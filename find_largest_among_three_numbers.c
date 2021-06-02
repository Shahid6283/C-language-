#include<stdio.h>

// Find the Largest Number Among the Three Numbers using if

int main()
{
    int a,b,c;

    printf("Enter the First Number : ");
    scanf("%d",&a);

    printf("Enter the Second Number : ");
    scanf("%d",&b);

    printf("Enter the Third Number : ");
    scanf("%d",&c);

    if(a>=b && a>=c){
        printf("\nThe Greatest Number is : %d",a);
    }

    else if(b>=a && b>=c){
        printf("\nThe Greatest Number is : %d",b);
    }

    else if(c>=a && c>=b){
        printf("\nThe Greatest Number is : %d",c);
    }

    return 0;
}