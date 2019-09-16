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
