#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: pointer to a pointer
 * @idx: index of the list where the new node should be added
 * @n: values of the struct
 * Return: nothing
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux_node, *new_node;
	unsigned int counter = 0; /* locate position for adding node */

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
/* pointer to a struct w/ a value of n & sets it to equal parameter "n" */

	if (*head == NULL || idx == 0)
	{
		new_node->next = *head;
		*head = new_node; /* creates a new node */
		return (*head);
	}

	aux_node = *head; /* keeps *head */

	while (counter < idx - 1) /* previous node for location for being inserted */
	{
		if (aux_node == NULL)
			return (NULL);
		aux_node = aux_node->next;
		counter++;
	}

	new_node->next = aux_node->next;
	aux_node->next = new_node;
	return (new_node);
}
