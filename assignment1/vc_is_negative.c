/* ************************************ */
/*                                      */
/* vc_print_alphabet.c                  */
/*                                      */
/* By: Nagisa, Alex, Emre A             */
/*                                      */
/* ************************************ */
#include <stdio.h>

void vc_is_negative(int n)
{
    char str[100];

    printf("Enter a value :");

    gets(str);

    if (str < 0)
    {
        putchar('N');
    }
    else if (str > 0)
    {
        putchar('P');
    }
}
