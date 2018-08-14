void vc_putstr(char *str);
int vc_strcmp(char *s1, char *s2);
int counter(char *str);
int vc_strlen(char *str);
void vc_swap(int *a, int *b);

int main()

{
    char a[] = "asd";
    char b[] = "asd";

    vc_putstr(a);
    vc_strcmp(a, b);
    vc_strlen(a);

    return 0;
}
