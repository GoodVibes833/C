/* ************************************ */
/*                                      */
/* vc_print_alphabet.c                  */
/*                                      */
/* By: Nagisa, Alex, Emre A             */
/*                                      */
/* ************************************ */
#include <stdio.h>

void vc_vc_print_comb(void)
{
    int num1;
    int num2;
    int num3;

    for (num1 = 48; num1 <= 57; num1++)
    {
        for (num2 = num1 + 1; num2 <= 57; num2++)
        {
            for (num3 = num2 + 1; num3 <= 57; num3++)
            {
                if (num1 != num2 && num1 != num3 && num2 != num3)
                {
                    putchar(num1);
                    putchar(num2);
                    putchar(num3);
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
}
