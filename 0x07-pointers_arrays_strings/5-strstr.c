#include"holberton.h"
/**
 *_strstr -function that searches a string f
 *@needle: string inlet
 *@haystack: match statement string
 *Return: s
**/
char *_strstr(char *haystack, char *needle)
{
int i, j;
int flag;

for (j = 0; haystack[j] != '\0'; j++)
{
	for (i = 0; needle[i] != '\0'; i++)
	{
	flag = 0;
		if (haystack[j + i] != needle[i])
		{
		flag = 1;
		break;
		}

	}
	if (needle[i] == '\0' && flag == 0)
	{
	return ((haystack + j));
	}
}
return (0);
}

