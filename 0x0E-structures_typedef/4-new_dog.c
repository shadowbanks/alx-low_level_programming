#include "dog.h"

char *_strcpy(char *dest, char *src);
int _strlen(char *s);

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
	char *temp_name;
	char *temp_owner;

	dog2 = malloc(sizeof(dog_t));

	if (dog2 == NULL)
	{
		free(dog2);
		return (NULL);
	}

	temp_name = malloc(_strlen(name) + 1);
	temp_owner = malloc(_strlen(owner) + 1);

	if (temp_name == NULL || temp_owner == NULL)
	{
		free(dog2);
		free(temp_name);
		free(temp_owner);
		return (NULL);
	}

	_strcpy(temp_name, name);
	_strcpy(temp_owner, owner);

	dog2->name = temp_name;
	dog2->age = age;
	dog2->owner = temp_owner;

	return (dog2);
}

/**
 * _strlen - Calculate length of string
 * @s: string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
		i++, s++;
	return (i);
}

/**
 * _strcpy - make a copy of a string
 * @dest: where the copy should be stored
 * @src: string to be copied
 *
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
