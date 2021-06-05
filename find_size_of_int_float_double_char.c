#include<stdio.h>

// Find the Size of Int,Float,Double and Char

int main()
{
    int inttype;
    float floattype;
    double doubletype;
    char chartype;
    
    // The sizeof(variable)operator computes the size of a variable. And, to print the result returned by sizeof, we use %lu format specifier.
    printf("The Size of Int is : %lu bytes",sizeof(inttype));
    printf("\nThe Size of Float is : %lu bytes",sizeof(floattype));
    printf("\nThe Size of Double is : %lu bytes",sizeof(doubletype));
    printf("\nThe Size of Char is : %lu bytes",sizeof(chartype));

    return 0;
}