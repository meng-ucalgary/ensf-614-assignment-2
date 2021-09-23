/*
 * File Name:               lab2exe_B.c
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 2 Exercise B
 * Lab section:             B01
 * Completed by:            Bhavyai Gupta
 * Submission Date:         NA
 */

int my_strlen(const char *s);
/*  Duplicates strlen from <string.h>, except return type is int.
 *  REQUIRES
 *     s points to the beginning of a string.
 *  PROMISES
 *     Returns the number of chars in the string, not including the
 *     terminating null.
 */

void my_strncat(char *dest, const char *source, int);
/*  Duplicates strncat from <string.h>, except return type is void.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[7] = "banana";
    const char str2[] = "-tacit";
    const char *str3 = "-toe";

    /* point 1 */
    char str5[] = "ticket";
    char my_string[100] = "";
    int bytes;
    int length;

    /* using strlen C libarary function */
    length = (int)strlen(my_string);
    printf("\nLine 1: my_string length is %d.", length);

    /* using sizeof operator */
    bytes = sizeof(my_string);
    printf("\nLine 2: my_string size is %d bytes.", bytes);

    /* using strcpy C libarary function */
    strcpy(my_string, str1);
    printf("\nLine 3: my_string contains: %s", my_string);

    length = (int)strlen(my_string);
    printf("\nLine 4: my_string length is %d.", length);

    my_string[0] = '\0';
    printf("\nLine 5: my_string contains:\"%s\"", my_string);

    length = (int)strlen(my_string);
    printf("\nLine 6: my_string length is %d.", length);

    bytes = sizeof(my_string);
    printf("\nLine 7: my_string size is still %d bytes.", bytes);

    /* strncat append the first 3 characters of str5 to the end of my_string */
    strncat(my_string, str5, 3);
    printf("\nLine 8: my_string contains:\"%s\"", my_string);

    length = (int)strlen(my_string);
    printf("\nLine 9: my_string length is %d.", length);

    strncat(my_string, str2, 4);
    printf("\nLine 10: my_string contains:\"%s\"", my_string);

    /* strncat append ONLY up ot '\0' character from str3 -- not 6 characters */
    strncat(my_string, str3, 6);
    printf("\nLine 11: my_string contains:\"%s\"", my_string);

    length = (int)strlen(my_string);
    printf("\nLine 12; my_string has %d characters.", length);

    printf("\n\nUsing strcmp - C library function: ");

    printf("\n\"ABCD\" is less than \"ABCDE\" ... strcmp returns: %d",
           strcmp("ABCD", "ABCDE"));
    printf("\n\"ABCD\" is less than \"ABND\" ... strcmp returns: %d",
           strcmp("ABCD", "ABND"));
    printf("\n\"ABCD\" is equal than \"ABCD\" ... strcmp returns: %d",
           strcmp("ABCD", "ABCD"));
    printf("\n\"ABCD\" is less than \"ABCd\" ... strcmp returns: %d",
           strcmp("ABCD", "ABCd"));
    printf("\n\"Orange\" is greater than \"Apple\" ... strcmp returns: %d\n",
           strcmp("Orange", "Apple"));

    return 0;
}
