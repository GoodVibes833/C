/* ************************************ */
/*                                      */
/* vc_fibonacci.c                       */
/*                                      */
/* By: Yukako, Alex, Juan               */
/*                                      */
/* ************************************ */
#include <stdio.h>

int vc_fibonacci(int n)
{
    // 0 1 1 2 3 5 8

    if (n < 0)
    {
        return -1;
    }
    if (n == 0)
    {
        return 0;
    }
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return (vc_fibonacci(n - 2) + vc_fibonacci(n - 1));
    }
}
