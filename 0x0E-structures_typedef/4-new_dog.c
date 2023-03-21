#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: new_dog or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);

	name_copy = malloc(strlen(name) + 1);
	owner_copy = malloc(strlen(owner) + 1);
	if (!name_copy || !owner_copy)
	{
		free(new_dog);
		free(name_copy);
		free(owner_copy);
		return (NULL);
	}

	strcpy(name_copy, name);
	strcpy(owner_copy, owner);

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
