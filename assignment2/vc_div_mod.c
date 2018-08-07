#include <stdio.h>

void vc_div_mod(int *a, int *b, int *div, int *mod)
{
    *div = *a / *b;
    *mod = *a % *b;

    printf("%d\n", *a);
    printf("%d\n", *b);
    printf("%d\n", *div);
    printf("%d\n", *mod);
}

int main()
{
    int a = 10;
    int b = 3;
    int div = 0;
    int mod = 0;

    vc_div_mod(&a, &b, &div, &mod);

    return 0;
}
