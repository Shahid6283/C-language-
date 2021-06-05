#include<stdio.h>

// Find that a Entered Year is Leap Year or Not 

int main()
{
    int year;

    printf("Enter a Year : ");
    scanf("%d",&year);

    // Leap year if perfectly divisible by 400
    if(year%400==0){
        printf("%d is a Leap Year",year);
    }

    // Not a Leap year if divisible by 100 but not divisible by 400
    else if(year%100==0){
        printf("%d is not a Leap Year",year);
    }

    // Leap year if not divisible by 100 but divisible by 4
    else if(year%4==0){
        printf("%d is a Leap Year",year);
    }
    
    // Remaining All others Years are not a Leap Year
    else{
        printf("%d is not a Leap Year",year);
    }

    return 0;
}