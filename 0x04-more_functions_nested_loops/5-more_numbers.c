#include "main.h"

/**
 * more_numbers - print out (0 - 14)
 *
 * @a: holds digit of the second digit
 * of numbers > 9
 * Return: 0
 */

int printOut(int a);

void more_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j;

		for (j = 0; j <= 14; j++)
		{
			if (j <= 9)
				printOut(j);
			else
			{
				_putchar(j / 10 + '0');
				if ((j % 10) <= 4)
					printOut(j % 10);
				else
					break;
			}

		}
		_putchar('\n');
		i++;
	}
}

/**
 * printOut - print out the second digit
 *
 * @a: holds digit of the second digit
 * of numbers > 9
 *
 * Return: 0
 */

int printOut(int a)
{
	_putchar(a + '0');
	return (0);
}

