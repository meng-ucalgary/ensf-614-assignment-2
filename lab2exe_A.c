/*
 * File Name:               lab2exe_A.c
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 2 Exercise A
 * Lab section:             B01
 * Completed by:            Bhavyai Gupta
 * Submission Date:         NA
 */

/**********************************************************************
 * One objective of this program is to use sizeof operator to find the number of
 * bytes of memory alloacted for simple varibles, pointers, and arrays.
 *
 * The second objective is is to demonstrate how array notations in a function
 * argument is still treated as a pointer.
 **********************************************************************/

#include <stdio.h>

void try_to_change(double *dest);
void try_to_copy(double dest[], double source[]);
double add_them(double a[5]);

int main(void)
{
    double sum = 0;
    double x[4];
    double y[] = {2.3, 1.2, 2.0, 4.0};
    printf(" sizeof(double) is %d bytes.\n", (int)sizeof(double));
    printf(" size of x in main is:  %d bytes.\n", (int)sizeof(x));
    printf(" y has %d elements and its size is:  %d bytes.\n",
           (int)(sizeof(y) / sizeof(double)), (int)sizeof(y));

    /* Point one */

    try_to_copy(x, y);

    try_to_change(x);

    sum = add_them(&y[1]);
    printf("\n sum of values in y[1], y[2] and y[3] is:  %.1f\n", sum);

    return 0;
}

void try_to_copy(double dest[], double source[])
{
    dest = source;

    /* point two*/

    return;
}

void try_to_change(double *dest)
{
    dest[3] = 49.0;

    /* point three*/

    printf("\n sizeof(dest) in try_to_change is %d bytes.\n", (int)sizeof(dest));
    return;
}

double add_them(double arg[5])
{
    *arg = -8.25;

    /* point four */

    printf("\n sizeof(arg) in add_them is %d bytes.\n", (int)sizeof(arg));
    printf("\n Incorrect array size computation: add_them says arg has %d"
           " element.\n",
           (int)(sizeof(arg) / sizeof(double)));

    return arg[0] + arg[1] + arg[2];
}
