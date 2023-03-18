#include <stdio.h>

/**
 * main - Print every possible combinations of two digits
 * It also treats numbers like 01 and 10 as the same combination
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j, k;

	for (i = 48; i < 56; i++)
	{
		for (j = 48; j < 57; j++)
		{
			for (k = 48; k < 58; k++)
			{
				if (i >= j)
					continue;
				if (j >= k)
					continue;
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55 && j == 56 && k == 57)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
