#include<stdio.h>

// Find the Size of Int,Long int,Long Long int,Double,Long Double

int main()
{
    int a;
    long int b;
    long long int c;
    double d;
    long double e;

    // The sizeof(variable)operator computes the size of a variable. And, to print the result returned by sizeof, we use %lu format specifier.
    printf("The Size of Int is : %u bytes",sizeof(a));
    printf("\nThe Size of Long Int is : %u bytes",sizeof(b));
    printf("\nThe Size of Long Long Int is : %u bytes",sizeof(c));
    printf("\nThe Size of Double is : %u bytes",sizeof(d));
    printf("\nThe Size of Long Double is : %u bytes",sizeof(e));

    return 0;
}