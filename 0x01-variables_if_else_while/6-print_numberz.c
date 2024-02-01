#include <stdio.h>
/**
 * main - code goes here
 *
 * Code to print numbers from 0 to 9 followed by new ling
 *
 * Return: 0.
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
	}
	putchar('\n');
	return (0);
}
