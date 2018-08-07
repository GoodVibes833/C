#include <stdio.h>

void vc_putstr(char *str)
{
    int size = *(&str + 1) - str;
    for (int i = 0; i < size; i++)
    {
        putchar(str[i]);
    }
}

int main()
{

    char str[6] = "hello";

    vc_putstr(str);

    return 0;
}
