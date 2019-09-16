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
 * delete_dnodeint_at_index - deletes the node at index of a doubly linked list
 * @head: double pointer to the head of a doubly linked list
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int len_linklist, idx_count;

	if (head == NULL)
		return (-1);
	temp = *head;
	len_linklist = dlistint_len(*head);
	if (index >= len_linklist) /* given index is too big so it fails */
		return (-1);
	/* deletes node if it is at the head & last node of the list */
	if (index == 0 && len_linklist == 1)
	{free(*head);
	return (1); }
	/* deletes head of list if list has 2 or more nodes */
	if (index == 0 && len_linklist > 1)
	{
		*head = temp->next;
		(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	/* head edge cases accounted for, move pointer to index */
	for (idx_count = 0; idx_count < index; idx_count++)
		temp = temp->next;
	/* reassigns null and deletes the end node */
	if (temp->next == NULL)
	{
		temp->prev->next = NULL;
		free(temp);
		return (1);
	}
	/*delete the middle node and reassign links*/
	else if (temp->prev && temp->next)
	{
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		free(temp);
		return (1);
	}
	return (-1);
}
