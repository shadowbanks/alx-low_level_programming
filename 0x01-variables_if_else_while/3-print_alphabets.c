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

	char cap = 'A';

	while (cap <= 'Z')
	{
		putchar(cap);
		cap++;
	}

	putchar('\n');
	return (0);
}
