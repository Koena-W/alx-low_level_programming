#include <stdio.h>
/**
 * main - my code goes here
 *
 * Code to print number in base 16
 *
 * Return: 0.
 */
int main(void)
{
	char ch;
	int ch2;

	for (ch2 = 0; ch2 <= 9; ch2++)
	{
		putchar('0' + ch2);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
