#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * string_nconcat - concatenate 2 strings
  * @s1: first string
  * @s2: second string
  * @n: number of byte of s2 to be concatenated
  *
  * Return: pointer to combined string
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	char *fS = s1;
	char *sS = s2;
	unsigned int fLen, sLen, i = 0, j = 0;

	if (fS == NULL)
		fS = "";
	if (sS == NULL)
		sS = "";

	fLen = strlen(fS);
	sLen = strlen(sS);

	if (n < sLen)
		sLen = n;

	s = malloc((sizeof(*s) * (fLen + sLen)) + 1);

	while (i < fLen)
	{
		if (s == NULL)
			return (NULL);
		s[i] = fS[i];
		i++;
	}

	while (i < (fLen + sLen))
	{
		if (s == NULL)
			return (NULL);
		s[i] = sS[j];
		j++;
		i++;
	}

	s[i] = '\0';
	return (s);
}
