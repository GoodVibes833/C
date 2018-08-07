/* ************************************ */
/*                                      */
/* vc_print_alphabet.c                  */
/*                                      */
/* By: Nagisa, Alex, Emre A             */
/*                                      */
/* ************************************ */
#include <stdio.h>

void vc_putnbr(int nb)
{
    char c;
    if (nb < 0)
    {
        nb = -nb;
        putchar('-');
    }
    if (nb < 10)
    {
        putchar(nb + '0');
    }
    else
    {
        vc_putnbr(nb / 10);
        vc_putnbr(nb % 10);
    }
}