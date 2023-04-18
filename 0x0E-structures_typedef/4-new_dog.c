#include "dog.h"

/**
 * new_dog - Create a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog2;

	dog2 = malloc(sizeof(dog_t));

	if (dog2 == NULL)
		return (NULL);
	dog2->name = name;
	dog2->age = age;
	dog2->owner = owner;

	return (dog2);
}
