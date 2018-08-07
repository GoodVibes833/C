#include <stdio.h>

void vc_print_alphabet(void);
void vc_print_numbers(void);
void vc_is_negative(int n);
void vc_vc_print_comb(void);
void vc_vc_print_comb2(void);
void vc_putnbr(int nb);

int main(int argc, char const *argv[])
{
    vc_print_alphabet();
    vc_print_numbers();
    vc_is_negative(2);
    return 0;
}

void vc_print_alphabet(void)
{
    char ch;
    for (ch = 'a'; ch <= 'z'; ch++)
    {
        putchar(ch);
    }
}

void vc_print_numbers(void)
{
    char ch;
    for (ch = 'z'; ch >= 'a'; ch--)
    {
        putchar(ch);
    }
}

void vc_is_negative(int n)
{

    if (n < 0)
    {
        putchar('N');
    }
    else if (n > 0)
    {
        putchar('P');
    }
}

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