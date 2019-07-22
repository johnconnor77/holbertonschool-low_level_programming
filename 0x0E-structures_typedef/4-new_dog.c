#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *_strlen - function that calculate the lenght
 * of the input string
 * @s: string input
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
		;
	i++;
	return (i);
}
/**
 *_strcpy - put a string pointer into other one
 *Result: dest
 *@dest:string inlet
 *@src: string outlet
 *Return: value depending on function
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;
	for (i = 0; src[i] != '\0'; i++)
		;
	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = src[i];

	return (dest);
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
	int len_name, len_owner;
	dog_t *n_dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	/* length of name and owner */
	len_name = _strlen(name);
	len_owner = _strlen(owner);

	/*allocate pointer with struct size*/
	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);

	/* Leng of Fields name and owner allocation */
	n_dog->name = malloc(sizeof(char)*len_name);
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = malloc(sizeof(char)*len_owner);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	/* Copying variables */

	_strcpy(n_dog->name, name);
	_strcpy(n_dog->owner, owner);
	n_dog->age = age;

return (n_dog);
}

