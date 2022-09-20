#include "main.h"

/**
 * _strcpy - Copy string from one location to another
 * @dest: pointer to the destination
 * @src: string to be copied
 *
 * Return: pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int count = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		count++;
	}

	for (i = 0; i <= (count + 1); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
