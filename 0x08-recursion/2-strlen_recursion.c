#include "main.h"

/**
 * _print_rev_recursion - prints a string
 * @s: pointer to string
 *
 * Return: nothing
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
