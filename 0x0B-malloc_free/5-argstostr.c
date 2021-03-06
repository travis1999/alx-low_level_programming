#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 * Return: returns the length of the strin
 */

int _strlen(char *s)
{
	int idx = 0;

	while (*(s + idx) != '\0')
	{
		idx++;
	}

	return (idx);
}


/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the start of the concatnated string
 */

char *str_concat(char *s1, char *s2)
{
	int s1_len = _strlen(s1);
	int s2_len = _strlen(s2);
	char *newstr = malloc((sizeof(char) * (s1_len  + s2_len)) + 1);
	int idx;

	if (newstr == NULL)
		return (NULL);

	for (idx = 0; idx < s1_len; idx++)
		newstr[idx] = s1[idx];

	for (idx = 0; idx < s2_len; idx++)
		newstr[idx + s1_len] = s2[idx];

	newstr[s1_len + s2_len] = 0;

	free(s1);
	return (newstr);
}

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of args
 * @av: character array of args
 * Return: NULL if ac == 0 or av == NULL or
 * pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *new_str = malloc(1);
	int idx;

	new_str[0] = '\0';

	if (ac == 0 || av == NULL)
		return (NULL);

	for (idx = 0; idx < ac; idx++)
	{
		new_str = str_concat(new_str, av[idx]);
		new_str = str_concat(new_str, "\n");
	}

	return (new_str);
}
