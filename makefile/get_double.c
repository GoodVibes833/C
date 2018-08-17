#include <stdio.h>

//  get double
double get_double(char *prompt, double min, double max)
{
    double input;
    printf("%s", prompt);
    // scan with format
    scanf("%lf", &input);

    do
    {
        if (input < min)
            printf("Must be at least this long %lf\n", min);
        if (input > max)
            printf("Must be at least this long %lf\n", max);
    }

    while (input < min || input > max);
    return input;
}