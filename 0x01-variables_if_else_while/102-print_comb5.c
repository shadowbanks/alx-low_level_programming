#include <stdio.h>

int main(void)
{
	int fCount = sCount = tCount = lsCount = 48;
	int fSet, sSet;

	while (fCount <= 57)
	{
		sCount = 48;
		while (sCount < 57)
		{
			tCount = 48;
			while (tCount <= 57)
			{
				lsCount = 48;
				while (lsCount <= 57)
				{
					fSet = fCount * 10 + sCount;
					sSet = tCount * 10 + lsCount;
					if (fSet < sSet)
					{
						putchar(fCount);
						putchar(sCount);
						putchar(' ');
						putchar(tCount);
						putchar(lsCount);
						if (fCount == 57 && sCount == 56 && tCount == 57 && lsCount == 57)
							break;
						putchar(',');
						putchar(' ');
					}
					lsCount++;
				}
				tCount++;
			}
			sCount++;
		}
		fCount++;
	}
	putchar('\n');
}
