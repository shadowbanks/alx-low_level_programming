#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: pointer to a string
 * @s2: pointer to a string
 *
 * Return: 0 if equal
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int count = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			break;
	}

	return (s1[i] - s2[i]);
}
