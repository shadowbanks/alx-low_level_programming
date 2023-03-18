#include <stdio.h>

/**
 * main -  Prints all posssible combinastions of two two-digits numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, m, n;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j < 57; j++)
		{
			for (m = 48; m <= 57; m++)
			{
				if (i > m)
					continue;
				for (n = 48; n <= 57; n++)
				{
					if (i >= m && j >= n)
						continue;
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(m);
					putchar(n);
					if (i == 57 && j == 56 && m == 57 && n == 57)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
