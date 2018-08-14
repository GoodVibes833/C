#include <stdio.h>

int main(int argc, char *argv[])
{
    int i, j;
    int temp;
    int int_array[100];

    for (i = 0; i < argc; ++i)
    {
        int_array[i] = *argv[i];
    }

    for (i = 1; i < argc; ++i)
    {
        for (j = i + 1; j < argc; ++j)
        {
            if (int_array[i] > int_array[j])
            {
                temp = int_array[i];
                int_array[i] = int_array[j];
                int_array[j] = temp;
            }
        }
    }

    for (i = 1; i < argc; ++i)
        printf("%d\n", int_array[i] - 48);

    return 0;
}