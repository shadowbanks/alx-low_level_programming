#include "main.h"
#include <stdio.h>
/**
 * _strncpy - string copy
 * @dest: pointer to a string
 * @src: pointer to a string
 * @n: number of byte of src
 *
 * Return: location to copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *sr, *de;
	int i;

	sr = src;
	de = dest;

	for (i = 0; (src[i] != '\0') && i < n; i++)
	{
		de[i] = sr[i];
	}
	for(; i < n; i++)
	{
		de[i] = '\0';
	}

	return (de);
}
