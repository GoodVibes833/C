#include <stdio.h>
#define MAX 1024

int main()
{
    char *b = "Hello";
    char a[] = {'a', 'b', '\0'};

    int age;
    age = 21;

    /*if*/
    int i;
    if (age > 20)
    {
        printf("You can drink !");
    }
    else if (age > 10 && age < 20)
    {
        printf("You cannot drink beer");
    }

    /*for*/
    for (int i = 0; i < 10; i++)
    {
        /*do something*/
    };

    int n;
    n = 10;
    while (n > 0)
    {
        n--;
        printf("n is %d\n", n);
    }

    printf("hello World %d\n", MAX);
    return 0;
}
