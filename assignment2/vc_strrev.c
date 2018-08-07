
#include <stdio.h>

char *vc_strrev(char *str)
{
    int lenth = 0;

    while (str[lenth] != '\0')
    {
        putchar(str[lenth]);
        putchar('\n');
        lenth++;
    }
    printf("size is %d , ", lenth);
    putchar('\n');
    char result[lenth];

    for (int i = 0; i < lenth; i++)
    {
        putchar(str[i]); //hellow
        result[6 - i] = str[i];
    }
    putchar(result[1]);
    putchar(result[2]);
    putchar(result[3]);
    putchar(result[4]);
    putchar(result[5]);
    putchar(result[6]);
    char *realresult = result;

    return realresult;
}

int main()
{
    char *str = "qweqwe";
    vc_strrev(str);
    return 0;
}
