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
	char *cpy_name, *cpy_owner;
	dog_t *n_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	/*allocate pointer with struct size*/
	n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL)
	{
		return (NULL);
	}
	/* Copying variables */
	cpy_name = _strdup(name);

	if (cpy_name == NULL)
	{
		free(cpy_name);
		free(n_dog);
	}

	cpy_owner = _strdup(owner);
	if (cpy_owner == NULL)
	{
		free(cpy_name);
		free(cpy_owner);
		free(n_dog);
	}
	n_dog->name = cpy_name;
	n_dog->owner = cpy_owner;
	n_dog->age = age;

return (n_dog);
}

