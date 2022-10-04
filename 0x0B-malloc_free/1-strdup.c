#include "main.h"
#include <stdlib.h>

/**
  * _strdup - create a new space in memory to
  * store a copy of a string
  * @str: pointer to string
  *
  * Return: pointer to string copy
  */

char *_strdup(char *str)
{
	char *test;
	char *a;
	int i = 0;
	int j = 0;
	int count = 0;

	test = str;

	if (str == NULL)
		return (NULL);
	while (*(str + i) != '\0')
	{
		count++;
		i++;
	}

	a = malloc(sizeof(char) * count);

	while (j < count)
	{
		if (a == NULL)
			return (NULL);
		*(a + j) = *(test + j);
		j++;
	}
	return (a);
}
