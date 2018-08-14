
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct sllist
{
    int val;
    struct sllist *next;

} sllnode;

sllnode *create(int val)
{
    // Dynamically allocate space for a new sllnode
    sllnode *node = malloc(sizeof(sllnode));
    // Check to make sure we didn’t run out of memory.
    if (node == NULL)
    {
        printf("ERROR : memory allocation.");
    }
    // Initialize the node’s val & next
    node->val = val;
    node->next = NULL;

    return node;
}

bool find(sllnode *head, int val)
{
    sllnode *current = head;

    while (current != NULL)
    {
        // If the current node’s val field is what we’re looking for, return true
        if (current->val == val)
        {
            return true;
        }
        // If not, set the traversal pointer to the next pointer in the list.
        current = current->next;
    }
    // If you’ve reached the end of the list, return
    return false;
};

sllnode *insert(sllnode *head, int val)
{
    // Dynamically allocate space for a new sllnode.
    sllnode *new_node;
    new_node = malloc(sizeof(sllnode));

    // Check to make sure we didn’t run out of memory.
    if (new_node == NULL)
    {
        printf("ERROR : memory allocation.");
    }
    // Populate and insert the node at the beginning of the linked list.
    new_node->val = val;
    new_node->next = head;
    // Return a pointer to the new head of the linked list.
    head = new_node;
    return head;
};

void destroy(sllnode *head)
{
    // If you’ve reached a null pointer, stop.
    if (head == NULL)
    {
        return;
    }
    // Delete the rest of the list
    destroy(head->next);

    // Free the current node.
    free(head);
}

void delete_node(sllnode *head, int n)
{
    //find nth node
    sllnode *current = head;
    if (n == 0)
    {
        sllnode *current = current;
        current = current->next;
        free(remove);
    }
    // others

    if (n != 0)
    {
        sllnode **str;
        sllnode *temp;
        sllnode *prev;

        prev.next = temp.next;
        free(temp);
    }

    // last
}

int main(int argc, char const *argv[])
{
    // if it was array, the array will be poped off from stack
    sllnode *first = create(10);
    sllnode *second = create(10);

    first->val = 10;
    first->next = second;

    return 0;
}
