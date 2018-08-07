/* ************************************ */
/*                                      */
/* vc_is_prime.c                        */
/*                                      */
/* By: Yukako, Alex, Juan               */
/*                                      */
/* ************************************ */

#include <stdio.h>

int vc_is_prime(int n)
{
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    if (count > 1)
    {
        return 0;
    }
    return 1;
}
