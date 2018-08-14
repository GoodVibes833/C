
#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int i;
    for (i = 1; i < argc; i++)
        printf("%s", argv[i]);
    return 0;
}
