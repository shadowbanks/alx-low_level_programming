#include <stdio.h>

/**
 * main - Print alphabet 0-9
 *
 *
 * Return: return 0
 */

int main(void)
{
	int count = 48;

	while (count <= 57)
	{
		putchar(count);
		count++;
	}
	putchar('\n');
	return (0);
}
