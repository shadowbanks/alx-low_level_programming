#include <stdio.h>

/**
 * main - Print numbers 01 - 89, without repeating it's reverse
 *
 *
 * Return: return 0
 */

int main(void)
{
	int count = 48;
	int count2 = 48;

	while (count2 <= 57)
	{
		count = 48;
		while (count <= 57)
		{
			if (count2 != count && count2 < count)
			{
				putchar(count2);
				putchar(count);
				if (count == 57 && count2 == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			count++;
		}
		count2++;
	}
	putchar('\n');
	return (0);
}
