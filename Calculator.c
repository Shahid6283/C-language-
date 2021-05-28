#include<stdio.h>

// Calculator which Calculates (+,-,*,/)

int main()
{
    float num1,num2;
    char operator;

    printf("Enter the Operator(+,-,*,/) : ");
    scanf("%c",&operator);

    printf("Enter the First Value : ");
    scanf("%f",&num1);

    printf("Enter the Second Value : ");
    scanf("%f",&num2);

    switch(operator){
        case '+':
        printf("%.2f + %.2f =  %.2f",num1,num2,num1+num2);
        break;

        case '-':
        printf("%.2f - %.2f = %.2f",num1,num2,num1-num2);
        break;
        
        case '*':
        printf("%.2f * %.2f = %.2f",num1,num2,num1*num2);
        break;
        
        case '/':
        printf("%.2f / %.2f = %.2f",num1,num2,num1/num2);
        break;

        default:
        printf("Error! Operator is Not Correct");
        break;

    }
    
    return 0;
}