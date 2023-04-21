#include "variadic_functions.h"

/**
 * print_all - Print any data type
 * @format: type of input
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	int len, i = 0;
	va_list ap;
	char *temp;

	if (format == NULL)
	{
		putchar('\n');
		return;
	}
	len = strlen(format);
	va_start(ap, format);

	while (i < len)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				printf("%s", (i == len - 1) ? "" : ", ");
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				printf("%s", (i == len - 1) ? "" : ", ");
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				printf("%s", (i == len - 1) ? "" : ", ");
				break;
			case 's':
				temp = va_arg(ap, char*);
				printf("%s", temp == NULL ? "(nil)" : temp);
				printf("%s", (i == len - 1) ? "" : ", ");
				break;
			default:
				break;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
