#include <stdio.h>
#include <math.h>
#include "get_double.h"

// get double from user as x, y

int main(int argc, char const *argv[])
{
    double x = get_double(" Enter the x value : ", -100, 100);
    double y = get_double(" Enter the y value : ", -100, 100);

    double distance = sqrt(pow(x, 2) + pow(y, 2));

    printf("distance is %.2lf(x = %.2lf, y= %.2lf) ", distance, x, y);

    return 0;
}
