#include "lists.h"
/**
 * sum_listint - function that returns the sum
 * of all the data of a linked list
 * @head: start of linked list
 * Return: Sum of elements
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;
	listint_t *node;

	node = head;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
