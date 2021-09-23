/*
 * File Name:               lab2exe_D.c
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 2 Exercise D
 * Lab section:             B01
 * Completed by:            Bhavyai Gupta
 * Submission Date:         NA
 */

#include <stdio.h>
#include <string.h>

struct course
{
    char dept[5];
    int number;
};

struct course func1(void);

void func2(struct course *p);

int main(void)
{
    struct course alpha = {"ENGG", 213};
    struct course beta = {"PHYS", 259};
    struct course *psc;
    int *pi;

    printf("A pointer to int occupies %d bytes.\n", (int)sizeof(pi));
    printf("A struct course occupies %d bytes.\n", (int)sizeof(alpha));
    printf("A pointer to struct course occupies %d bytes.\n",
           (int)sizeof(psc));

    pi = &(alpha.number);
    *pi = 233;
    psc = &beta;
    psc->number = 269;

    /* point one */

    alpha = func1();
    printf("The values in struct alfph are: %s and %d\n", alpha.dept, alpha.number);

    return 0;
}

struct course func1(void)
{
    struct course result;

    strcpy(result.dept, "ENCM");

    /* point two */

    result.number = 339;
    return result;
}
