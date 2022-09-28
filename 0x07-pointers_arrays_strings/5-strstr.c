#include "main.h"

/**
 * _strstr - find a substring in a string
 * @haystack: pointer to the main string
 * @needle: pointer to the substring
 *
 * Return: pointer to the found substring, if not found return NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, hayCount, neeCount;

	char *pHay = haystack;
	char *pNee = needle;

	j = 0;
	hayCount = 0;
	neeCount = 0;

	for (i = 0; *(pHay + i) != '\0'; i++)
		hayCount++;
	for (i = 0; *(pNee + i) != '\0'; i++)
		neeCount++;

	i = 0;
	while (i <= hayCount)
	{
		j = 0;
		while (j <= neeCount)
		{
			if (*(pHay + i) == *(pNee + j))
			{
				if (*(pHay + i + neeCount) == *(pNee + neeCount))
					return (haystack + i);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
