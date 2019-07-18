#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - function concatenates two strings to another pointer
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to take from s2
 * Return: destination
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i; /* len of s1 */
	unsigned int j; /* len of s2 */
	unsigned int tot; /* len of s1 + s2 + n*/
	char *d; /*destination string */

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)

		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n >= j) /* control parameter for not being out of s2 */
		n = j;

	tot = i + n + 1; /* allocate d with in order to put (s1 + s2/n + '\0') */

	d = malloc(sizeof(char) * tot);

	if (d  == NULL)
		return (NULL);

		/* reboot i & j*/

	for (i = 0; s1[i] != '\0'; i++)
		d[i] = s1[i]; 

	for (j = 0; j < n; j++)
		d[i + j] = s2[j]; 

	d[i + j] = '\0';

	return (d);
}
