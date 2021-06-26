#include<stdio.h>
#include<math.h>

// Check Whether a given number is Armstrong Number or not using loops

int main()
{
    int num,orignal_num,n=0,remainder;
    float result=0.0;

    printf("Enter the Number : ");
    
    scanf("%d",&num);

    orignal_num=num;

    for(orignal_num=num; orignal_num!=0; n++){
        orignal_num/=10;
    }

    for(orignal_num=num; orignal_num!=0; orignal_num/=10){
        remainder = orignal_num%10;
        result += pow(remainder,n);
    }


    if((int)result == num){
        printf("\n%d is a Armstrong Number",num);
    }
    else{
        printf("\n%d is not an Armstrong Number",num);
    }

    return 0;
}