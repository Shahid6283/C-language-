#include <stdio.h>

// To Check that a given Number is Prime or not

int main()
{
    int num,i,flag=0;

    printf("Enter a Positive Integer: ");
    scanf("%d",&num);

    for(i=2; i<=num/2; ++i){
    // condition for non-prime
    if(num%i==0) {
      flag = 1;
      break;
    }
    }

    if(num == 1) {
    printf("\n1 is neither Prime nor Composite");
    }

    else{
    if(flag == 0){
      printf("\n%d is a Prime Number",num);
    }
    else{
      printf("\n%d is not a Prime Number",num);
    }

    }

    return 0;
}