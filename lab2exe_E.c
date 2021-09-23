/*
 * File Name:               lab2exe_E.c
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 2 Exercise E
 * Lab section:             B01
 * Completed by:            Bhavyai Gupta
 * Submission Date:         NA
 * Purpose:                 Implementation file for complex number module
 */

#include "lab2exe_E.h"

struct cplx
cplx_add(struct cplx z1, struct cplx z2)
{
    struct cplx result;

    result.real = z1.real + z2.real;
    result.imag = z1.imag + z2.imag;
    return result;
}
