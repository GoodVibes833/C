/* ************************************ */
/*                                      */
/* *vc_strcmp                           */
/*                                      */
/* By: Yukako, Alex, Juan               */
/*                                      */
/* ************************************ */

#include <stdio.h>

int counter(char *str)
{
    int i;
    int charcount = 0;

    for (i = 0; str[i]; i++)
        charcount++;
    return charcount;
}

int vc_strcmp(char *s1, char *s2)
{
    int a = 0;
    a = counter(s1);
    int b = 0;
    b = counter(s2);

    if (a < b)
    {
        return -1;
    }
    else if (a > b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
