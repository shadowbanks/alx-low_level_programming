#include "main.h"

/**
 * _isupper - Check if a character is an uppercase
 * @c: the character to check
 *
 * Return: 1 if c is uppercase, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 97 &&  c <= 122)
		return (0);
	return (1);
}
