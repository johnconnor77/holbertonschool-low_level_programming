#include "lists.h"
/**
 * print_list - function that returns the number of elements
 * in a linked list
 * @h: linked list
 * Return: n,, number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		n++;
	}
	return (n);
}

