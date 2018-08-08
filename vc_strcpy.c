#include <stdio.h>

char *vc_strcpy(char *dest, char *src)
{
    for (int i = 0; src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    return dest;
};

int main()
{
    char var1[100] = "";
    char var2[100] = "asd";

    printf("%s", vc_strcpy(var1, var2));
    return 0;
}