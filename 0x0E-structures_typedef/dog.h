#ifndef DOG_H
#define DOG_H
/**
 * struct dog - new type struct dog
 * @name: the name
 * @age: age
 * @owner: the owner of dog
 *
 * Description: a struct of dog that contain three elements
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
#endif /* DOG_H */
