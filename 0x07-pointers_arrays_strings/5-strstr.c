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
	int i, j, hayCount, nCount;

	char *pHay = haystack;
	char *pNee = needle;

	j = 0;
	hayCount = 0;
	nCount = 0;

	for (i = 0; *(pHay + i) != '\0'; i++)
		hayCount++;
	for (i = 0; *(pNee + i) != '\0'; i++)
		nCount++;

	if (nCount == 0)
		return (pHay);

	i = 0;
	while (i <= hayCount)
	{
		j = 0;
		while (j <= nCount)
		{
			if ((pHay[i] == pNee[j]) && (pHay[i + nCount - 1] == pNee[j + nCount - 1]))
				return (pHay + i);
			j++;
		}
		i++;
	}
	return ('\0');
}
