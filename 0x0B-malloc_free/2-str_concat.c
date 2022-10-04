#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * str_concat - concatenate two strings
  * @s1: first string
  * @s2: second string
  *
  * Return: pointer to combined string
  */
char *str_concat(char *s1, char *s2)
{
	char *fS;
	char *sS;
	char *mem;
	unsigned int fLen, sLen;
	unsigned int i = 0, j = 0;

	fS = s1;
	sS = s2;
	if (fS == NULL)
		fS = "";
	if (sS == NULL)
		sS = "";
	fLen = strlen(fS);
	sLen = strlen(sS);
	mem = malloc(((fLen + sLen) * sizeof(char)) + 1);

	while (i < fLen)
	{
		if (mem == NULL)
			return (NULL);
		*(mem + i) = *(fS + i);
		i++;
	}
	while (i < (fLen + sLen))
	{
		if (mem == NULL)
			return (NULL);
		*(mem + i) = *(sS + j);
		j++;
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
