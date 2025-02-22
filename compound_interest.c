/*
Author: MULILA JAMES MUTISO 
ADM: D33-2422-2023 
DATE:22-02-2025
 * C program to calculate Compound Interest
 */

#include <stdio.h>
#include <math.h>

int main()
{
    float principle, rate, time, CI;

    /* Input principle, time and rate */
    printf("Enter principle (ksh): ");
    scanf("%f", &principle);

    printf("Enter time (years): ");
    scanf("%f", &time);

    printf("Enter rate (%): ");
    scanf("%f", &rate);

    /* Calculate compound interest */
    CI = principle* (pow((1 + rate / 100), time));

    /* Print the resultant CI */
    printf("Compound Interest = %f", CI);

    return 0;
}