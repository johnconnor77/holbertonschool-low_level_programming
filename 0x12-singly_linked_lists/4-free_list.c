#include "lists.h"
/**
 * free_list - function that free linked list
 * @head: start of linked list
 */ 
void free_list(list_t *head)
{
	list_t *temp;

	for (;head != NULL;)
	{
		temp = head ;
		free(temp->str);
		free(temp);
		head = head->next;
	}
}
