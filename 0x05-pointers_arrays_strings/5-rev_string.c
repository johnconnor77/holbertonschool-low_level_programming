#include "holberton.h"
/**
 *rev_string - function that print in revrse
 * the input string
 *@s: string input
 *
*/
void rev_string(char *s)
{
int i, j, k, m;
auto char aux[100];
m = 0;
k = 0;

for (i = 0; s[i] != '\0'; i++)
{
}
for (j = i - 1 ; s[j] != '\0'; j--)
{
	aux[m] = s[j];
	m++;
}
for (k = 0; k < i; k++)
{
	s[k] = aux[k];
}
}

