#include <stdio.h>
#include "dog.h"
/**
 * init_dog - a function that initialize a struct dog
 * @d: struct dog new name
 * @name: name
 * @age: age
 * @owner: owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
