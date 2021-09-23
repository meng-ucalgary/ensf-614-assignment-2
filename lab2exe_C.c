/*
 * File Name:               lab2exe_C.c
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 2 Exercise C
 * Lab section:             B01
 * Completed by:            Bhavyai Gupta
 * Submission Date:         NA
 */

#include <stdio.h>

int what(const int *a, int n);

// This function was not written for easy readability!
// It's a drill exercise about pointer arithmetic!
int what(const int *a, int n)
{
    const int *max = a, *min = a + n - 1, *guard = a + n;
    const int *p, *q;
    for (p = a + 1; p != guard; p++)
    {
        if (*p > *max)
            max = p;
    }
    for (q = a + n - 1; q != a; q--)
    {
        if (q[-1] < *min)
            min = q - 1;
    }

    // point one (after the 2nd loop has finished)

    return min - max;
}

int main(void)
{
    int w;
    int x[] = {99, 0, 0, -99, 0, 0};
    int y[] = {1, 0, 100, 2, 0, 3};
    w = what(x, sizeof(x) / sizeof(int));
    printf("1st result: %d.\n", w);
    w = what(y, sizeof(y) / sizeof(int));
    printf("2nd result: %d.\n", w);
    return 0;
}
