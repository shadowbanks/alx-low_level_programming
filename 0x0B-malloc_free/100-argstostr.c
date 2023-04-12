#include "main.h"
#include <stdio.h>

int _strlen(char *s);

/**
 * argstostr - concatenate all arguments passed to the program
 * @ac: Argument counter
 * @av: Arguments
 *
 * Return: pointer to new string or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i = 1, j, count = 0, temp = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		count += _strlen(av[i]);
		i++;
	}

	ptr = malloc(sizeof(char) * (count + ac));

	if (ptr == NULL)
		return (NULL);

	i = 1;

	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			ptr[temp] = av[i][j];
			temp++;
			j++;
		}
		ptr[temp++] = '\n';
		i++;
	}

	ptr[temp] = '\0';

	return (ptr);

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

	if (s == NULL)
		return (0);

	while (*s != '\0')
		i++, s++;
	return (i);
}
