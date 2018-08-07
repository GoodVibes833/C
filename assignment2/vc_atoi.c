// vc_atoi
// 1. all chars should nummeric - 0-9
// 2.

#include <stdio.h>
int vc_atoi(char *str)
{
    int lenth = 0;
    while (str[lenth] != '\0')
    {
        int i = (str[lenth]);
        lenth++;
        printf("size is %d\n", lenth);
        printf("value is %d\n", i);
    }

    return lenth;
}

int main()
{
    char *str = "hello";
    vc_atoi(str);
    return 0;
}
