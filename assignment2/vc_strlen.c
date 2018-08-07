#include <stdio.h>

int vc_strlen(char *str)
{
    int lenth = 1;
    while (str[lenth] != '\0')
    {
        printf("3size is %d\n", lenth);
        lenth++;
    }
    return lenth;
}

int main()
{
    char *str = "hellow";
    vc_strlen(str);
    return 0;
}
