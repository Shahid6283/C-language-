#include<stdio.h>
#include<math.h>

// Find the Square,Cube and the Square root of a numbers between 1 to n

int main()
{
    int n,i,s,c;
    float sq;

    printf("Enter the Number(from 1 to n)  : ");
    scanf("%d",&n);

    printf("\nNumber   Square   Cube    Square root");

    for(i=1; i<=n; i++){
        s =i*i;
        c = i*i*i;
        sq = sqrt(i);

        printf("\n  %d \t   %d \t   %d \t   %f",i,s,c,sq);
    }

    return 0;
}