#include"holberton.h"
/**
 *_strspn-function that fill memory with a constant byte
 *@s: initital segment
 *@accept: consistence parameter
 *Return: match
**/
unsigned int _strspn(char *s, char *accept)
{
int i, j, k;
unsigned int match;

match = 0;

for (j = 0; accept[j] != '\0'; j++)
{
}

i = 0;

while (i <= j)
{

	for (k = 0; accept[k] != '\0'; k++)
	{
		if (accept[k] == *s)
		{
			match++;
		}
	}
s++;
i++;
}
return (match);
}

