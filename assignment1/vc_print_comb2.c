/* ************************************ */
/*                                      */
/* vc_print_alphabet.c                  */
/*                                      */
/* By: Nagisa, Alex, Emre A             */
/*                                      */
/* ************************************ */
#include <stdio.h>

void vc_vc_print_comb2(void)
{
    int num1;
    int num2;
    int num3;
    int num4;

    for (num1 = 48; num1 <= 57; num1++)
    {
        for (num2 = 48; num2 <= 57; num2++)
        {
            for (num3 = 48; num3 <= 57; num3++)
            {

                for (num4 = 49; num4 <= 57; num4++)
                {
                    if (num1 + num2 != num3 + num4)
                    {
                        putchar(num1);
                        putchar(num2);
                        putchar(' ');
                        putchar(',');
                        putchar(' ');
                        putchar(num3);
                        putchar(num4);
                        putchar(' ');
                    }
                }
            }
        }
    }
}
