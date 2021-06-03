#include<stdio.h>

// Convert the Seconds into Hours,Minutes and Seconds

int main()
{
    long int hours,minutes,seconds,time;

    printf("Enter the Time in Seconds : ");
    scanf("%ld",&seconds);

    hours = seconds/3600;
    time = seconds%3600;
    minutes = time/60;
    seconds = time%60;

    printf("\nThe Time is   %d hrs : %d min : %d sec",hours,minutes,seconds);

    return 0;
}