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

	char letterCap = 'A';

	while (letterCap <= 'Z')
	{
		putchar(letterCap);
		letterCap++;
	}

	putchar('\n');
	return (0);
}
