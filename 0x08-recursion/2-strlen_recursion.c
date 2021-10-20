#include "main.h"

/**
 * _strelen_recurison - function that returns the length
 *
 * @s -the string to be mesured
 *
 * return
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	       	return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
