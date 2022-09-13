#include "main.h"

/**
 *_islower - Check if lowecase
 *@c: value to test
 *Return: 1 is lower, 0 if not
 *
 */

int _islower(int c)
{
	unsigned char letter = (unsigned char)c;
	if (letter < 'a' || letter > 'z')
	{
		/*_putchar(letter);*/
		return (0);
	}
	else
		return (1);
		/*_putchar(letter);*/
}
