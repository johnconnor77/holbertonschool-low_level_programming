#include "lists.h"
/**
 * insert_dnodeint_at_index - function that insert
 * a new node at a given position
 * @h: double pointer to the head of the double linked list
 * @idx: index of the list where the is add
 * @n:  value of new node
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *newnode, *temp;
    size_t counter = 0;

    if (h == NULL)
        return (NULL);

    newnode = malloc(sizeof(dlistint_t));
    if (newnode == NULL)
        return (NULL);

    newnode->n = n;
    temp = *h;

/* adds a new node to the beginning of the list */
    if (idx == 0)
    {
        add_dnodeint(h, n);
        return (newnode);
    }

    while (temp != NULL && counter < idx)
    {
        temp = temp->next;
        counter++;
    }

    if (idx >= counter)
        return (NULL);

/*adds a new node to the end of the list */
    if (temp == NULL)
    {
        add_dnodeint_end(h, n);
        return (newnode);
    }

/* adds node to the nth place of index */
    newnode->next = temp;
    newnode->prev = temp->prev;
    temp->prev->next = newnode;
    temp->prev = newnode;

    return (newnode);
}
