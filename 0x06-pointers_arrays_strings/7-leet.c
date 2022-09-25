#include "main.h"
#include <stdio.h>

/**
  * leet - encodes a string
  * @a: pointer to string to work on
  *
  * Return: pointer to string
  *
  */
char *leet(char *a)
{
	int i, j;
	char letter[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char code[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; *(a + i) != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (*(a + i) == *(letter + j))
				*(a + i) = *(code + j);
		}
	}
/*		printf("%c ", *(a + i)); */
	return (a);
}
