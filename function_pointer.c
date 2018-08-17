#include <stdio.h>

int Add(int a, int b)
{
    return a + b;
}

void printHello()
{
    printf("Hello\n");
}

int main()
{
    int c;
    int (*p)(int, int);
    p = &Add;
    (*p)(2, 3);
    c = p(2, 3);

    printf("c = %d\n", c);

    void (*q)();
    q = printHello;
    q();

    return 0;
}