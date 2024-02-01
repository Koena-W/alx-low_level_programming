#include <stdio.h>
/**
 * main - code goes there
 *
 * Code to print alphabets in lowercase
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
	putchar('\n');
	return (0);
}
