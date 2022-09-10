#include <stdio.h>

/**
 * main - Print alphabet a-z
 *
 *
 * Return: return char
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
