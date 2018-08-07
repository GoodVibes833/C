/* ************************************ */
/*                                      */
/* vc_sqrt.c                            */
/*                                      */
/* By: Yukako, Alex, Juan               */
/*                                      */
/* ************************************ */

#include <stdio.h>

int vc_sqrt(int n)
{
    int result = 0;
    for (int i = 1; i < n; i++)
    {
        if (i * i == n)
        {
            result = i;
        }
    }
    return result;
}
