#include <stdio.h>
#include <math.h>
#include "get_double.h"

// get double from user as x, y

int main(int argc, char const *argv[])
{
    // double x = get_double(" Meal price : ", -100, 100);
    // double y = get_double(" Tip percentage : ", -100, 100);

    double meal_price = get_double("Meal price : ", 0, 10000000);
    double tip_percentage = get_double("Tip percentage : ", 0, 100);

    // double distance = sqrt(pow(x, 2) + pow(y, 2));
    double tip_amount = meal_price * tip_percentage / 100;
    double total_bill = meal_price + tip_amount;

    printf("tip amount : %.2lf\n", tip_amount);
    printf("total bill : %.2lf\n", total_bill);

    return 0;
}
