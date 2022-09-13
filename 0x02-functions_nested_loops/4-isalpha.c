#include "main.h"

/**
 *_isalpha - Check if an alphabet
 *@c: value to test
 *Return: 1 is lower, 0 if not
 *
 */

int _isalpha(int c)
{
	unsigned char letter = (unsigned char)c;

	if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
	{
		/*_putchar(letter);*/
		return (1);
	}
	else
		return (0);
		/*_putchar(letter);*/
}
