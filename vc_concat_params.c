#include <stdio.h>

char *vc_concat_params(int argc, char **argv)
{
    char *result;
    int i;

    for (i = 1; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    return *argv;
};

int main(int argc, char **argv)
{
    vc_concat_params(argc, argv);
    return 0;
}
