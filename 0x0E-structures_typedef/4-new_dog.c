#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *_strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @str: input size of array
 * Return: s output char duplicated from str
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i, j;

	if (str == NULL)
	{
	return (NULL);
	}

	for (j = 0; str[j] != '\0'; j++)
		;
	s = malloc(j + 1);

	if (s == NULL)
	{
	return (NULL);
	}

	i = 0;
	while (i <= j)
	{
		s[i] = str[i];
		i++;
	}
	s[i + 1] = '\0';
	return (s);
}
/**
 * new_dog - function that creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer with copy of inlet data
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *cpy;

	if (name == NULL || owner == NULL)
		return (NULL);
	/*allocate pointer with struc size*/
	cpy = malloc(sizeof(dog_t));
	if (cpy == NULL)
	{
		free(cpy); /*release memory*/
		return (NULL);
	}
	/* Copying variables */
	cpy->name = _strdup(name);
	if (cpy->name == NULL)
	{
		free(cpy->name); /*release memory*/
		free(cpy);
		return (NULL);
	}
	cpy->owner = _strdup(owner);
	if (cpy->owner == NULL)
	{
		free(cpy->owner); /*release memory*/
		free(cpy);
		return (NULL);
	}
	cpy->age = age;
return (cpy);
}

