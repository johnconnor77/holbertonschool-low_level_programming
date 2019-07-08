#include"holberton.h"
/**
 *_strpbrk -function that searches a string for any of a set of bytes
 *@needle: string inlet
 *@haystack: match statement string
 *Return: s
**/
char *_strstr(char *haystack, char *needle)
{
int k, i, j, flag;

flag = 0;

for (k = 0; needle != '\0',k++)
{
}


for (j = 0; haystack[j] != '\0'; j++)
{
	for (i = 0; needle[i] != '\0'; i++)
	{
		if (haystack[j] == needle[i])
		{
			flag ++;
		}
	
	}
if (flag == k)
{
	break;
	return (s + j)
}
}

return NULL;
}
