#include "dog.h"
#include <stdlib.h>

/**
  * init_dog - initialize variable of type struct dog
  * @d: variable of type struct
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner name
  *
  * Return: Nothing
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

