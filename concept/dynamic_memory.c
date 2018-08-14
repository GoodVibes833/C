
#include <stdio.h>
#include <stdlib.h>

// ptr = malloc(byte-size)

int main(int argc, char const *argv[])
{
    int num;
    int i;
    int *ptr;

    num = 10;

    // malloc -> (void *)
    // it is allocated heap, above ptr is allocated in stack.
    // when main is recalled, ptr is gone, but malloc still remain
    // if we make a method that passing ptr, we can still access to the array after stack poped up
    ptr = (int *)malloc(num * sizeof(int));

    ptr = (int *)calloc(num, sizeof(int)); // it allocate 0,0,0....

    ptr = realloc(ptr, 20 * sizeof(int)); // reallocate ptr size 10 to 20

    if (ptr == NULL)
    {
        printf("ERROR! memory not allocated");
        exit(0);
    }

    for (i = 0; i < num; i++)
    {
        *(ptr + i) = i;
    };

    printf("ptr[0] = %d ,ptr[5] = %d\n", ptr[0], ptr[8]);
    printf("ptr[0] = %d ,ptr[5] = %d\n", *ptr, *(ptr + 14));

    //  how to clean the array in heap
    free(ptr);
    return 0;
}
