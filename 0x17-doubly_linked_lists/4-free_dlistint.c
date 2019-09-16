#include "lists.h"
/**
 * free_dlistint - functions that free's
 * a doubly linked list
 * @head: pointer to the head of the linked list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
