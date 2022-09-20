#include "main.h"

/**
  * _strlen - Print out the len of a string
  * @s: the string to be checked
  *
  * Return: 0 success
  */

int _strlen(char *s)
{
	int count = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
