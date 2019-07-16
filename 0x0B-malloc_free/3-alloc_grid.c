#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to
 * a 2 dimensional array of integers
 * @width: width of a grid
 * @height: height of a grid
 * Return: 0 or NULL
 */
int **alloc_grid(int width, int height)
{
	int i; /* width */
	int j; /* height */
	int **k; /* poiner to pointer */

	if (width < 1 || height < 1)
		return (NULL);

	k = malloc(sizeof(int *) * height); /* the amount of byter from int pointer */

	if (k == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		k[j] = malloc(sizeof(int) * width); /* allocate pointers inside pointers */

		if (k[j] == NULL)
		{
			for (i = 0; i < j; i++)
			{
				free(k[i]); /*free individual pointers inside pointers */
			}
			free(k); /* free all */
			return (NULL);
		}
		for (i = 0; i < width; i++)
			k[j][i] = 0;
	}
	return (k);
}

