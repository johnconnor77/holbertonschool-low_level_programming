#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to a pointer
 * @index: index of the node that should be deleted
 * Return: 1 if successful or -1 if fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux_node;
	listint_t *new_node;
	unsigned int counter;

	aux_node = *head;
	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = aux_node->next; /* first moves head then frees temp */
		free(aux_node);
		return (1);
	}

	counter = 0;
	while (counter < index - 1)
	{
		aux_node = aux_node->next;  /* previous node of the nth being deleted */
		counter++;
	}

	new_node = aux_node->next->next; /* moves two spaces */
	free(aux_node->next);
	aux_node->next = new_node;
	return (1);
}
