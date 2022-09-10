#include <stdio.h>

/**
 * main - Print number 0-9
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
		if (count != 57)
		{
			putchar(',');
			putchar(' ');
		}
		count++;
	}
	putchar('\n');
	return (0);
}
