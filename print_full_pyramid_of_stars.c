#include<stdio.h>

// Print the Full Pyramid of Stars(***)

int main()
{
    int row,i,space,k=0;

    printf("Enter the Numbers of Rows : ");
    scanf("%d",&row);
    
    printf("\n");

    for(i=1; i<=row; i++, k=0){
        for(space=1; space<=row-i; space++){
            printf("  ");
        }
        while(k!=2 * i - 1){
            printf("* ");
            k++;
        }
        printf("\n");    
    }

    return 0;
}