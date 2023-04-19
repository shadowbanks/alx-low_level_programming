#include "dog.h"

/**
 * free_dog - Kill dog
 * @d: the dog to be killed
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	if (d != NULL)
		free(d++);
}
