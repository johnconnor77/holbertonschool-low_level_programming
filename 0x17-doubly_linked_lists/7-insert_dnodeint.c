#include "lists.h"
/**
 * dlistint_len - function that  returns
 * the number of elements in a doubly linked list
 * @h: head of doubly linked list
 * Return: Number of elements in a doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}
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
	size_t len_linklist = 0;

	if (h == NULL)
		return (NULL);
	temp = *h;

	len_linklist = dlistint_len(*h);
		if (idx > len_linklist)
			return (NULL);

	newnode = malloc(sizeof(dlistint_t));
		if (newnode == NULL)
			return (NULL);
	newnode->n = n;

/* adds a new node to the beginning of the list */
	if (idx == 0)
	{
	newnode = add_dnodeint(h, n);
		return (newnode);
	}
	while (temp != NULL && counter < idx)
	{
		temp = temp->next;
		counter++;
	}
/*adds a new node to the end of the list */
	if (temp == NULL)
	{
		newnode = add_dnodeint_end(h, n);
		return (newnode);
	}
/* adds node to the nth place of index */
	newnode->next = temp;
	newnode->prev = temp->prev;
	temp->prev->next = newnode;
	temp->prev = newnode;
return (newnode);
}
