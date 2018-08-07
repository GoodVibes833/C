/* ************************************ */
/*                                      */
/* vc_recursive_power.c                 */
/*                                      */
/* By: Yukako, Alex, Juan               */
/*                                      */
/* ************************************ */

#include <stdio.h>

int vc_recursive_power(int n, int power)
{
    if (power > 0)
    {
        return (n * vc_recursive_power(n, power - 1));
    }
    return 1;
}
