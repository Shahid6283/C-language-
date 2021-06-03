#include<stdio.h>

// Convert the Seconds into Days,Hours,Minutes and Seconds

int main()
{
    long int hours,minutes,seconds,time,days,hour;

    printf("Enter the Time in Seconds : ");
    scanf("%ld",&seconds);

    days = seconds/86400;
    hour = seconds%86400;
    hours = hour/3600;

    time = seconds%3600;
    minutes = time/60;
    seconds = time%60;

    printf("\nThe Time is   %d days : %d hrs : %d min : %d sec",days,hours,minutes,seconds);

    return 0;
}