/* ************************************ */
/*                                      */
/* recursive_factorial.c                */
/*                                      */
/* By: Yukako, Alex, Juan               */
/*                                      */
/* ************************************ */
#include <stdio.h>

int vc_recursive_factorial(int n)
{
    if (n >= 1)
    {
        return n * vc_recursive_factorial(n - 1);
    }
    else
    {
        return 1;
    }
}
