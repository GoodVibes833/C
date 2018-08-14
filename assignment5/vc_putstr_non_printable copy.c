
#include <stdio.h>

void vc_putstr_non_printable(char *str)
{
    while (*str)
    {
        if (*str < 32 && *str >= 0)
        {
            char str1 = *str / 16;
            int str2 = *str % 16;

            putchar('\\');
            putchar(str1 + '0');

            int gap = str2 - 10;
            putchar('a' + gap);
        }
        else
        {
            putchar(*str);
        }
        str++;
    }
};

int main(int argc, char const *argv[])
{
    char str1[100] = "Hello\nwhat is your favorite food?";
    //                Hello\0awhat is your favorite food?
    vc_putstr_non_printable(str1);
    return 0;
}