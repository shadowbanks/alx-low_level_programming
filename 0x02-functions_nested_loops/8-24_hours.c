#include "main.h"

/**
 * jack_bauer - print time
 *
 * Return: null
 */

void jack_bauer(void)
{
	char fHour, sHour, fMin, sMin;

	fHour = sHour = fMin = sMin = '0';

	while (fHour <= '2')
	{
		sHour = '0';
		while (sHour <= '9')
		{
			if (fHour == '2' && sHour == '4')
				break;
			fMin = '0';
			while (fMin <= '5')
			{
				sMin = '0';
				while (sMin <= '9')
				{
					_putchar(fHour);
					_putchar(sHour);
					_putchar(':');
					_putchar(fMin);
					_putchar(sMin);
					if (fHour == 50 && sHour == 51 && fMin == 53  && sMin == 57)
						break;
					_putchar('\n');
					sMin++;
				}
				fMin++;
			}
			sHour++;
		}
		fHour++;
	}
	_putchar('\n');
}
