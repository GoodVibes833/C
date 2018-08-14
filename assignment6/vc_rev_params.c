
#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int i;
    for (i = argc - 1; i > 0; i--)
        printf("%s\n", argv[i]);

    return 0;
}
