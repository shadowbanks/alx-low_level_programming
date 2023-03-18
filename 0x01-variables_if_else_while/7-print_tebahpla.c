#include <stdio.h>

/**
 * main - Print the alphabets in reverse
 *
 * Return: Nothing
 */

int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
		putchar(i);
	putchar('\n');

	return (0);
}
