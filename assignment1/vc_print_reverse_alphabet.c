/* ************************************ */
/*                                      */
/* vc_print_alphabet.c                  */
/*                                      */
/* By: Nagisa, Alex, Emre A             */
/*                                      */
/* ************************************ */
#include <stdio.h>

void vc_print_reverse_alphabet(void)
{
    char ch;

    for (ch = 'z'; ch >= 'a'; ch--)
    {
        putchar(ch);
    }
}
