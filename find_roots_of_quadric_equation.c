#include<stdio.h>
#include<math.h>

// Find the root of a Quadric Equation

int main()
{
    double a,b,c;
    double discriminant,root1,root2,realpart,imgpart;

    printf("Enter the Coeficcients of a,b and c : ");
    scanf("%lf%lf%lf",&a,&b,&c);

    discriminant = (b*b) - (4*a*c);

    if(discriminant>0){
        root1 = (-b + sqrt(discriminant))/ (2*a);
        root2 = (-b - sqrt(discriminant))/ (2*a);
        printf("\nRoot1 is : %lf\nroot2 is : %lf",root1,root2);
    }

    if(discriminant<0){
        realpart = (-b) / (2*a);
        imgpart = sqrt(-discriminant) / (2*a);
        printf("\nRoot1 is : %.2lf + %lf i\nroot2 is : %.2lf - %lf i",realpart,imgpart,realpart,imgpart);
    }

    if(discriminant==0){
        root1 = root2 =  (-b) / (2*a);
        printf("\nRoot1 = root2 is : %lf",root1);
    }

    return 0;
}