#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: pointer to a string
 * @src: pointer to a string
 *
 * Return: location to conbined string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int count = 0;
	int count2 = 0;
	int tCount;

	for (i = 0; *(dest + i) != '\0'; i++)
	{
		count++;
	}

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + count + i) = *(src + i);
		count2++;
	}

	tCount = count + count2;

	*(dest + tCount) = '\0';
	return (dest);
}
