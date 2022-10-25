#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>
#include <stdio.h>

/**
  * print_all - print all
  * @format: format specifiers
  * @...: arguments
  */

void print_all(const char * const format, ...)
{
	char *str;
	int i = 0;
	int check = strlen(format);
	va_list ap;

	va_start(ap, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char*);

				if (str == NULL || *str == '\0')
				{
					printf("nil");
					break;
				}
				printf("%s", str);
				break;
		}
		if (i == (check - 1))
			break;
		else if (format[i] == 'c' || format[i] == 'i'
				|| format[i] == 'f' || format[i] == 's')
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
