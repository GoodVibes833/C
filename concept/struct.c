#include <stdio.h>
#include <string.h>

struct Book
{
    int isbn;
    char title[50];
    char author[50];
};

struct Point
{
    int x;
    int y;
};

struct Point add(struct Point p1, struct Point p2)
{
    struct Point result;
    result.x = p1.x + p2.x;
    result.y = p1.y + p2.y;

    return result;
}

int main()
{
    //book
    struct Book book1;
    book1.isbn = 12345;
    strcpy(book1.title, "C programming");
    strcpy(book1.author, "Javier Jesus");

    printf("isbn : %d\n", book1.isbn);
    printf("isbn : %s\n", book1.title);
    printf("isbn : %s\n", book1.author);

    struct Point p1 = {1, 1};
    struct Point p2 = {2, 2};

    struct Point result = add(p1, p2);
    printf("result x,y = (%d, %d)\n", result.x, result.y);

    return 0;
}