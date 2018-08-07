/* ************************************ */
/*                                      */
/* iterative_factorial.c                */
/*                                      */
/* By: Yukako, Alex, Juan               */
/*                                      */
/* ************************************ */
#include <stdio.h>

int iterative_factorial(int n)
{
    int result = n;

    for (int i = 1; i < n; i++)
    {
        result = result * i;
    }
    printf("%d", result);
    if (result > 0)
    {
        result = result;
    }
    else
    {
        result = 0;
    }
    return result;
}
