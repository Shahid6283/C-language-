#include<stdio.h>
#include<math.h>

// Find that a Entered Number is Armstrong Number or Not 
// What is Armstrong Number ---->
// Using a simple number 153 ,we see there are 3 digits in it. If we do a simple mathematical operation of raising each of its digits to the power of 3, and then totalling the sum obtained, we get 153.
// e.g ---> 153 = 1^3 + 5^3 + 3^3 = 153

int main()
{
    int num,a,c,e,n;
    float b,d,f,sum=0;

    printf("Enter the Number : ");
    scanf("%d",&num);

    n = num;

    a = n%10;
    b = pow(a,3);
    n = n/10;

    c = n%10;
    d = pow(c,3);
    n = n/10;

    e = n%10;
    f = pow(e,3);
    n = n/10;
    
    sum = b+d+f;

    printf("\n%.2f",sum);

    if(num==sum){
        printf("\nEntered Number is a Armstrong Number");
    }
    else{
        printf("\nEntered Number is Not a Armstrong Number");
    }

    return 0;
}