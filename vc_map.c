
#include <stdio.h>

void f(int a)
{
    putchar(a);
}

int *vc_map(int *tab, int length, int (*f)(int))
{
    f(10);
    return 0;
}

int main(int argc, char const *argv[])
{
    int tab[4] = {1, 2, 3, 4};
    void (*p)(int);
    p = f;
    vc_map(tab, 4, f);

    return 0;
}
