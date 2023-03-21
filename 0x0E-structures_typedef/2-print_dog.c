#include <stdio.h>
#include "dog.h"
#include <string.h>
/**
 * print_dog - prints a struct dog
 * @d : struct dog new name
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
