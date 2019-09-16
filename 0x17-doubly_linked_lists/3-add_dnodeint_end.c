#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node
 * at the end of a doubly linked list
 * @head: double pointer to the head of a doubly linked list
 * @n : integer value
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *temp = *head;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (temp == NULL)
	{
		*head = newnode;
		newnode->prev = NULL;
		newnode->next = temp;
		return (newnode);
	}


	while (temp->next != NULL) /*walk till the end of the dll */
		temp = temp->next;

	temp->next = newnode;
	newnode->prev = temp;
	newnode->next = NULL;

	return (newnode);
}
