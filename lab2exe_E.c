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

struct cplx cplx_add(struct cplx z1, struct cplx z2)
{
    struct cplx result;

    result.real = z1.real + z2.real;
    result.imag = z1.imag + z2.imag;

    return result;
}

void cplx_subtract(struct cplx z1, struct cplx z2, struct cplx *difference)
{
    (*difference).real = z1.real - z2.real;
    (*difference).imag = z1.imag - z2.imag;
}

void cplx_multiply(const struct cplx *pz1, const struct cplx *pz2, struct cplx *product)
{
    double a = (*pz1).real;
    double b = (*pz1).imag;
    double c = (*pz2).real;
    double d = (*pz2).imag;

    (*product).real = (a*c - b*d);
    (*product).imag = (a*d + b*c);
}
