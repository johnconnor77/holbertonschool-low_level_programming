#ifndef DOG_H
#define DOG_H

/**
 *  * struct dog - dog's info
 *
 * @name: name
 * @age: age
 * @owner: owner
*/
typedef struct dog
{
		char *name;
		float age;
		char *owner;
} my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
