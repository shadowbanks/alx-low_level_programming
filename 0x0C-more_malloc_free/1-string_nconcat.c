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
	unsigned int fLen;
	unsigned int sLen;

	if (fS == NULL)
		fS = "";
	if (sS == NULL)
		sS = "";

	fLen = strlen(fS);
	sLen = strlen(sS);

	if (n < sLen)
		sLen = n;

	s = malloc((sizeof(*s) * (fLen + sLen)) + 1);

	while (1)
	{
		if (s == NULL)
			return (NULL);
	}
	s = strcat(s, fS);
	s = strncat(s, sS, sLen);

	return (s);
}
