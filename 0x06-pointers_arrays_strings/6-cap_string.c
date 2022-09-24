#include "main.h"
#include <stdio.h>

/**
  * cap_string - Capitalize the first letter of every world
  * @a: pointer to string to work on
  *
  * Return: pointer to string
  *
  */
char *cap_string(char *a)
{
	int i, j;
	char marks[14] = {' ', '\n', '\t', ',', ';',
		'.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; *(a + i) != '\0'; i++)
	{
		for (j = 0; j < 14; j++)
		{
			if (*(a + i) == *(marks + j))
			{
/*				printf("%c ", *(marks + j)); */
				if (*(a + 1 + i) >= 97 && *(a + 1 + i) <= 122)
					*(a + 1 + i) = *(a + 1 + i) - 32;

			}
		}
/*		printf("%c ", *(a + i)); */
	}
	return (a);
}
