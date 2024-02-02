#include <stdio.h>
/**
 * main - my code goes here
 *
 * Code for possible 3 combinations
 *
 * Return: 0.
 */
int main(void)
{
	int i, n, j, m;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 10; n++)
		{
			for (j = 0; j < 10; j++)
			{
				for (m = 0; m < 10; m++)
				{
					putchar('0' + i);
					putchar('0' + n);
					putchar(' ');
					putchar('0' + j);
					putchar('0' + m);
					if (!(i == 9 && n == 8))
					{
						putchar(',');
						putchar(' ');
					}
					m++;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
