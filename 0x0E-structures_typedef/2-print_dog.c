#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog -function that prints dog info
 * @d: dog input data
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	/* case for name*/
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	/*case for age*/
	if (d->age == 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	/*case for owner*/
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
