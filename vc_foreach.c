
#include <stdio.h>

void f(int a)
{
    putchar(a);
}

void vc_foreach(int *tab, int length, void (*f)(int))
{
    f(10);
}

int main(int argc, char const *argv[])
{
    int tab[4] = {1, 2, 3, 4};
    void (*p)(int);
    p = f;
    vc_foreach(tab, 4, f);

    return 0;
}
