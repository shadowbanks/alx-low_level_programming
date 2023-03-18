#include <stdio.h>

/**
 * main - Print every possible combinations of two digits
 * It also treats numbers like 01 and 10 as the same combination
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j;

	for (i = 48; i < 57; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i >= j)
				continue;
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
