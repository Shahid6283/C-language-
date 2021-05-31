#include<stdio.h>

// Find the Volume of the Box using Function

void volume(int a,int b,int c){
    int vol = a*b*c;
    printf("\nThe Volume of the Box is : %.3f",(float)vol);
}

int main()
{
    int l,b,h;

    printf("Enter the Length of the Box : ");
    scanf("%d",&l);

    printf("Enter the Breadth of the Box : ");
    scanf("%d",&b);

    printf("Enter the Height of the Box : ");
    scanf("%d",&h);

    volume(l,b,h);

    return 0;
}