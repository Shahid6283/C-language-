#include<stdio.h>

// Convert Inches into foot

int main()
{
    float f;
    float i;

    printf("Enter the Inches : ");
    scanf("%f",&i);

    f=(i/12);

    printf("Foot is : %f",f);

    return 0;
}