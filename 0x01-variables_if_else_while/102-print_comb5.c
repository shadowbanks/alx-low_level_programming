#include <stdio.h>

/**
  * checker - check and print numbers
  * @fC: first counter
  * @sC: second counter
  * @tC: third counter
  * @lsC: last counter
  * @fSet: first set of numbers
  * @sSet: Second set of numbers
  */
void checker(int fC, int sC, int tC, int lsC, int fSet, int sSet)
{
	if (fSet < sSet)
	{
		putchar(fC);
		putchar(sC);
		putchar(' ');
		putchar(tC);
		putchar(lsC);
		if (fC == 57 && sC == 56 && tC == 57 && lsC == 57)
			return;
		putchar(',');
		putchar(' ');
	}
}

/**
  *main - prints all possible combinations of two two-digit numbers
  *range 0 to 99
  *
  *Return: 0
  */
int main(void)
{
	int fCount, sCount, tCount, lsCount, fSet, sSet;

	fCount = sCount = tCount = lsCount = 48;
	while (fCount <= 57)
	{
		sCount = 48;
		while (sCount <= 57)
		{
			tCount = 48;
			while (tCount <= 57)
			{
				lsCount = 48;
				while (lsCount <= 57)
				{
					fSet = fCount * 10 + sCount;
					sSet = tCount * 10 + lsCount;
					checker(fCount, sCount, tCount, lsCount,  fSet, sSet);
					lsCount++;
				}
				tCount++;
			}
			sCount++;
		}
		fCount++;
	}
	putchar('\n');
	return (0);
}
