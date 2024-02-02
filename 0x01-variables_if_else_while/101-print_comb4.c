#include <stdio.h>
/**
 * main - my code goes here
 *
 * Code to print 3 possible combinations
 *
 * Return: 0.
 */
int main(void)
{
	int n;
	int i;
	int m;

	for (m = 0; m < 8; m++)
	{
		for (n = m + 1; n < 9; n++)
		{
			i = n + 1;
			do {
				putchar('0' + m);
				putchar('0' + n);
				putchar('0' + i);
				if (m < 7)
				{
					putchar(',');
					putchar(' ');
				}
				i++;
			} while (i < 10);
		}
	}
	putchar('\n');
	return (0);
}
