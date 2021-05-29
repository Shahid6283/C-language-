#include<stdio.h>

// Find the area of the rectangle 

int main()
{   
    int length,breath;

    // Take length of the rectangle from the user 
    printf("\n Enter the length of rectangle=");
    scanf("\n %d",&length);

    // Take breadth of the rectangle from the user 
    printf("\n Enter the breath of rectangle=");
    scanf("\n %d",&breath);

    // This will print the area of the rectangle 
    printf("\n The area of rectangle is=%d",length*breath);

    return 0;

}