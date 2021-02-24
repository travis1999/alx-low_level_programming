#include "holberton.h"

/**
 * _print_rev_recursion - prints a string in reverse using recursion
 * @s: string to be printed
 */

void _print_rev_recursion(char *s)
{
	char saved = *s;

	if (*s == '\0')
		return;

	_print_rev_recursion(++s);
	_putchar(saved);
}
