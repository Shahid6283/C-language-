#include<stdio.h>

// Evaluate the Expression (++p - --m + m++ * p++)

int main()
{
    int p,m;

    printf("Enter the Value of p : ");
    scanf("%d",&p);

    printf("Enter the Value of m : ");
    scanf("%d",&m);

    p = ++p - --m + m++ * p++;

    printf("The Result of given Expression is : %d",p);

    return 0;
}