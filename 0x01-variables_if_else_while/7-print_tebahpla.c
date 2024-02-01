#include <stdio.h>
/**
 * main - my code goes here
 *
 * Code to print letters in reverse
 *
 * Return: 0.
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
