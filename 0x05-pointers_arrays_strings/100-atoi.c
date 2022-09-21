#include "main.h"
#include <limits.h>

/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 *
 * Return: interget - the convert string
 */

int _atoi(char *s)
{
	int sign = 1;
	int i;
	int total = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign = sign * (-1);

		if (s[i] >= '0' && s[i] <= '9')
		{
			if (total > INT_MAX / 10
				|| (total == INT_MAX / 10
				&& s[i] - '0' > 7))
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}
			total = total * 10 + s[i] - '0';
		}

	}

	if (total == 0)
		return (0);

	total = total * sign;
	return (total);
}
