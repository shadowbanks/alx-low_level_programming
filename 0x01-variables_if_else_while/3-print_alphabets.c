#include <stdio.h>

/**
 * main - Print alphabet a-zA-Z
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

	int cap = 65;

	while (cap <= 90)
	{
		putchar(cap);
		cap++;
	}

	putchar('\n');
	return (0);
}
