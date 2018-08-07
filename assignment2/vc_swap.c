#include <stdio.h>

void vc_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 10;
    int b = 11;
    vc_swap(&a, &b);

    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}
