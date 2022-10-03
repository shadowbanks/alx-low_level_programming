#include <stdio.h>
#include <stdlib.h>

int main(int argc, __attribute__((unused)) char **argv)
{
	int count = 0;
	int cent;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);
	
	if (cent < 0)
	{
		printf("0\n");
	}
	else
	{
		while (cent > 0)
		{
			if (cent >= 25)
			{
				cent -= 25; count += 1;
			}
			else if (cent >= 10)
			{
				cent -= 10; count += 1;
			}
			else if (cent >= 5)
			{
				cent -= 5; count += 1;
			}
			else if (cent >= 2)
			{
				cent -= 2; count += 1;
			}
			else if (cent >= 1)
			{
				cent -= 1; count += 1;
			}
		}
		printf("%d\n", count);
	}
	return (0);
}
