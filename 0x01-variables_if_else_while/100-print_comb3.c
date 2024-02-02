#include <stdio.h>
/**
 * main - my code goes here
 *
 * Code to combine all 2 possible numbers
 *
 * Return: 0.
 */
int main(void)
{
	int n, i;

	for (n = 0; n < 9; n++)
	{
		i = n + 1;
		do
		{
			putchar('0' + n);
			putchar('0' + i);
			if (n < 8)
			{
				putchar(',');
				putchar(' ');
			}
			i++;
		}while (i < 10);
	}
	putchar('\n');
	return (0);
}
