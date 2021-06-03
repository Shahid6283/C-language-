#include<stdio.h>
#include<math.h>

// Find the Area of the triangle using Heron's Formula 

int main()
{
    float a,b,c,side,area;

    printf("Enter the Three Sides of the Triangle : ");
    scanf("%f %f %f",&a,&b,&c);

    // s ---> half of the triangles perimeter
    side = (a+b+c)/2;
    area = sqrt(side*(side-a)*(side-b)*(side-c));

    printf("\nThe Area of the Triangle is : %f",area);

    return 0;
}