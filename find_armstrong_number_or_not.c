#include<stdio.h>
#include<math.h>

// Find that a Entered Number is Armstrong Number or Not (using while loop)
// What is Armstrong Number ---->
// Using a simple number 153 ,we see there are 3 digits in it. If we do a simple mathematical operation of raising each of its digits to the power of 3, and then totalling the sum obtained, we get 153.
// e.g ---> 153 = 1^3 + 5^3 + 3^3 = 153

int main()
{
    int num,a,n;
    float b,sum=0;

    printf("Enter the Number : ");
    scanf("%d",&num);

    n = num;

    while(n!=0){
        a = n%10;
        b = pow(a,3);
        sum+=b;
        n = n/10;
    }

    printf("\n%.2f",sum);

    if(num==sum){
        printf("\n%d is a Armstrong Number",num);
    }
    else{
        printf("\n%d is Not a Armstrong Number",num);
    }

    return 0;
}