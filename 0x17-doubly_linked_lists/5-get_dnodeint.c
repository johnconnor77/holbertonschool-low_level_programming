#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns
 * the nth node of a doubly linked list
 * @head: pointer to the head of the linked list
 * @index: index of the node starting from 0
 * Return: targeted node or NULL if it doesnt exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	size_t node_count = 0;

	temp = head;

	while (temp != NULL)
	{
		if(node_count == index) /*if the count matches the index then return, else continue */
			return (temp);

		temp = temp->next;
		node_count++;
	}
	return (NULL);
}
