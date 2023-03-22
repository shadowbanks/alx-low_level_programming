#include "main.h"

/**
 * _islower - Check if lowercase character
 * @c: character to test
 *
 * Return: 1 if a lowercase, else 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 123)
		return (1);
	return (0);
}
