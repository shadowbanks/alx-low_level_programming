#include "dog.h"
#include <stdio.h>
#include <string.h>

/**
  * print_dog - prints a struct dog type
  * @d: type of (struct dog)
  *
  * Return: nothing
  */

void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Name: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
