#include <stdio.h>

/**
 * main - execution starts here
 *
 * Return: Always returns 0
 */

int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
