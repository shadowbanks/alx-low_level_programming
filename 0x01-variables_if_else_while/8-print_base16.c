#include <stdio.h>

/**
 * main - Print numbers of base 16 in lowercase
 *
 *
 * Return: return char
 */

int main(void)
{
	int letter = 48;
	int cap = 97;

	while (letter <= 57)
	{
		putchar(letter);
		letter++;
	}

	while (cap <= 102)
	{
		putchar(cap);
		cap++;
	}

	putchar('\n');
	return (0);
}
