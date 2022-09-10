#include <stdio.h>

/**
 *  main - Prints numbers between 012 to 789
 *  Return: return 0
 */

int main(void)
{
	int a = 48;
	int b = 48;
	int c = 48;

	while (b < 58)
	{
		a = 48;
		while (a < 58)
		{
			c = 48;
			while (c < 58)
			{
				if (b != a && b != c && a != b && b < a && a < c)
				{
					putchar(b);
					putchar(a);
					putchar(c);
					if (a == 56 && b == 55 && c == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			a++;
		}
		b++;
	}
	putchar('\n');
	return (0);
}
