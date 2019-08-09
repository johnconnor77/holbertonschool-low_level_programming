#include "lists.h"
/**
 * pop_listint - function that deletes
 * the head node of a linked list
 * @head: Complete Linked list
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *head_node;
	int data; /* save node data */

	if (*head == NULL)
		return (0);

	head_node = *head;
	*head = (*head)->next;

	data = head_node->n;
	free(head_node);

	return (data);
}
