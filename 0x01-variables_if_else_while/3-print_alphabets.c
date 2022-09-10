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
	int cap = 65;

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	while (cap <= 90)
	{
		putchar(cap);
		cap++;
	}

	putchar('\n');
	return (0);
}
