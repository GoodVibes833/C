/* ************************************ */
/*                                      */
/* iterative_power.c                    */
/*                                      */
/* By: Yukako, Alex, Juan               */
/*                                      */
/* ************************************ */
#include <stdio.h>

int vc_iterative_power(int n, int power)
{
    if (power > 0)
    {
        int multiple = n;
        for (int i = 1; i < power; i++)
        {
            n = n * multiple;
        }
        return n;
    }
    return 0;
}
