#include <stdio.h>
/**
 * main - code goes there
 *
 * Code that print alphabets in lowercase the uppercase
 *
 * Return: 0.
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
