#include "dog.h"

/**
 * free_dog - Kill dog
 * @d: the dog to be killed
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d++);
}
