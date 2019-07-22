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
	free(s);
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
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	/*allocate pointer with struc size*/
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	/* Copying variables */
	cpy_name = _strdup(name);
	cpy_owner = _strdup(owner);
	new_dog->name = cpy_name;
	new_dog->owner = cpy_owner;
	new_dog->age = age;
return (new_dog);
}

