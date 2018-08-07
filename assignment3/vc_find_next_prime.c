/* ************************************ */
/*                                      */
/* vc_find_next_prime.c                 */
/*                                      */
/* By: Yukako, Alex, Juan               */
/*                                      */
/* ************************************ */

#include <stdio.h>

int vc_find_next_prime(int n) //7
{
    for (int j = n + 1; 1; j++) //8 9 10....
    {
        int count = 0;
        for (int i = 2; i <= j; i++)
        {
            if (j % i == 0)
            {
                count++;
            }
        }
        if (count == 1)
        {
            return j;
        }
    }
}
