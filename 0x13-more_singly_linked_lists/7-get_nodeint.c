#include "lists.h"
/**
 * get_nodeint_at_index - function that
 * returns the nth node of a linked list
 * @head: start of the linked list
 * @index: position inside the linked list
 * Return: nth node or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int counter = 0; /* start as arrays */

	node = head;

	while (node != NULL)
	{
		if (counter == index)
			return (node);

		node = node->next;
		counter++;
	}
	return (NULL);
}
