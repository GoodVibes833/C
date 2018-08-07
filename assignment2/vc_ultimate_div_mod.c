#include <stdio.h>

void vc_ultimate_div_mod(int *a, int *b)
{
    int temp = *a;
    *a = temp / *b;
    *b = temp % *b;

    printf("*a is %d\n", *a);
    printf("*b is %d\n", *b);
    printf("temp is %d\n", temp);
}

int main()
{
    int a = 10;
    int b = 3;

    vc_ultimate_div_mod(&a, &b);

    return 0;
}
