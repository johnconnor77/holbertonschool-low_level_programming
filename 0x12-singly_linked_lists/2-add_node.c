#include "lists.h"
/**
 * add_node -function that add a new node
 * at the beginning of a list
 * @head: start of linked list
 * @str: string that will be added
 * Return: address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int i = 0, len = 0;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (newnode);

	newnode->str = strdup(str); /*From string.h */

	if (newnode->str == NULL)
	{
		free(newnode);
		return (newnode);
	}

	while (str[i] != '\0')
	{
	len++;
	i++;
	}

	newnode->len = len;

	newnode->next = *head;

	*head = newnode;

	return (*head);
}
