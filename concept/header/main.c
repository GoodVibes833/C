#include "multiply.h"
#define SQUARE(X) ((X) * (X))
#define MAX(X, Y) ((X) > (Y) ? (X) : (Y))

int main(int argc, char const *argv[])
{
    /* code */
    int result = multiply(10, 10);
    int squared = SQUARE(10);
    int max = MAX(10, 20);
    return 0;
}
