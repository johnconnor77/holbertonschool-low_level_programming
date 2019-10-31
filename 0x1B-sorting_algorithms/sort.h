#ifndef _SORT_H
#define _SORT_H
#define UNSORTED 0
#define SORTED 1

#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;

} listint_t;

void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
int partition(int *array, int lo, int hi, size_t size);
void q_sort(int *array, int lo, int hi, size_t size);
void shell_sort(int *array, size_t size);
void swap_vals(int *ai, int *aj);
void swap(listint_t *left, listint_t *right, listint_t **list);
void cocktail_sort_list(listint_t **list);

#endif /* _SORT_H */
