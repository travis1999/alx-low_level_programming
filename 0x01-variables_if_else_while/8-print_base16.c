#include <stdio.h>

/**
 * main - execution starts here
 *
 * Return: Always returns 0
 */

int main(void)
{
	char ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a' ; ch <= 'f' ; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
