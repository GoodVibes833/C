
#include "vc_stock.h"
#include <stdlib.h>
#include <stdlib.h>

char *vc_strdup(char *src)
{
    char *str;
    char *p;
    int len = 0;

    while (src[len])
    {
        len++;
    }
    str = malloc(len + 1);
    p = str;
    while (*src)
    {
        *p++ = *src++;
    }
    *p = '\0';
    return str;
}

static int vc_count_words(char *str)
{
    int count;

    count = 0;
    while (*str)
    {
        while (*str && (*str == ' ' || *str == '\n' || *str == '\t'))
            str++;
        if (*str && *str != ' ' && *str != '\n' && *str != '\t')
        {
            count++;
            while (*str && *str != ' ' && *str != '\n' && *str != '\t')
                str++;
        }
    }
    return count;
}

/*
**  Returns the number of characters until the next whitespace.
*/
static int vc_num_chars(char *str)
{
    int len;

    len = 0;
    while (*str)
    {
        if (*str == ' ' || *str == '\n' || *str == '\t')
            break;
        str++;
        len++;
    }
    return len;
}

char **vc_split_whitespaces(char *str)
{
    char **split_str;
    int i;
    int j;
    int len;
    int wc;

    i = 0;
    wc = vc_count_words(str);
    if (!(split_str = (char **)malloc(sizeof(char **) * (wc + 1))))
        return NULL;
    while (*str && wc) /* wc to avoid going over the bound */
    {
        len = vc_num_chars(str);
        if (len > 0)
        {
            split_str[i] = (char *)malloc(sizeof(char) * (len + 1)); /* +1 for '\0' error check needed */
            for (j = 0; j < len; j++)
                split_str[i][j] = str[j];
            split_str[i++][j] = '\0';
            wc--;
        }
        str += len + 1; /* +1 to skip the whitespace */
    }
    split_str[i] = 0;
    return split_str;
}

static void print_addr(unsigned int offset)
{
    print_hex((offset >> 24) & 0xff);
    print_hex((offset >> 16) & 0xff);
    print_hex((offset >> 8) & 0xff);
    print_hex(offset & 0xff);
    putchar(':');
    putchar(' ');
}
int main(int argc, char *argv[])
{
    // size_param is the length of the argument;
    // str is the address of the argument;
    // copy is the copy of the argument;
    // words is the array returned by vc_split_whitespaces.

    t_stock stock;
    stock.size_param = argc;
    stock.str = print_addr(**argv);
    stock.copy = *argv;
    stock.words = vc_split_whitespaces(**argv);

    return 0;
}
