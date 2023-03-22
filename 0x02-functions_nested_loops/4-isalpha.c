#include "main.h"

/**
 * _isalpha- Check if lowercase character
 * @c: the character to check
 *
 * Return: 1 if a lowercase, else 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 123))
		return (1);
	return (0);
}
