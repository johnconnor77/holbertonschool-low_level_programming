#include "sort.h"
/**
 * swap - change address of node right
 * with node at left
 * @left: node at left side of DLL
 * @right: node at right side of DLL
 * @list: pointer with the head of DLL
 */
void swap(listint_t *left, listint_t *right, listint_t **list)
{

	if (left->prev)
	{
		left->prev->next = right;
	}
	else
	{
		*list = right;
	}

	if (right->next)
	{
		right->next->prev = left;
	}

	left->next  = right->next;
	right->prev = left->prev;
	right->next = left;
	left->prev = right;
}
/**
 * cocktail_sort_list - sorts a DLL of integers
 * in ascending order using the cocktail shaker
 * sort algorithm
 * @list: double pointer with the head of the DLL
 *
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *node, *right, *left;
	int right_n, left_n;
	int STATE = UNSORTED;

	node = *list;
	if (!list || !(*list) || (*list)->next == NULL)
		return;
	while (STATE == UNSORTED)
	{
		STATE = SORTED;
		while (node->next != NULL)
		{
			left_n = node->n, right_n = node->next->n;
			if (left_n > right_n)
			{
				swap(left = node, right = node->next, list);
				print_list(*list);
				STATE = UNSORTED;
			}
			else
			{
				node = node->next;
			}
		}
		while (node->prev != NULL)
		{
			left_n = node->prev->n, right_n = node->n;
			if (left_n > right_n)
			{
				swap(left = node->prev, right = node, list);
				print_list(*list);
				STATE = UNSORTED;
			}
			else
			{
				node = node->prev;
			}
		}
	}
}
