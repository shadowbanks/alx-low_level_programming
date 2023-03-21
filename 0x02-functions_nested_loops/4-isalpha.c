#include "main.h"

/**
 * _islower - Check if lowercase character
 *
 * Return: 1 if a lowercase, else 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90)|| (c >= 97 && c <= 123))
		return (1);
	return (0);
}
