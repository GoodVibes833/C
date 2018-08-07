/* ************************************ */
/*                                      */
/* vc_print_alphabet.c                  */
/*                                      */
/* By: Nagisa, Alex, Emre A             */
/*                                      */
/* ************************************ */
#include <stdio.h>

void vc_print_alphabet(void)
{
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        putchar(ch);
    }
}
