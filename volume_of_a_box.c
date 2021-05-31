#include<stdio.h>

// Find the Volume of the Box 

int main()
{
    int length,breadth,height;

    printf("Enter the Length of the Box : ");
    scanf("%d",&length);

    printf("Enter the Breadth of the Box : ");
    scanf("%d",&breadth);

    printf("Enter the Height of the Box : ");
    scanf("%d",&height);

    int volume = length*breadth*height;

    printf("\nThe Volume of the Box is : %.3f",(float)volume);

    return 0;
}