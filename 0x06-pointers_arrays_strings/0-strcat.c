#include <main.h>

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the resulting string dash
 */

char *_strcat(char *dest, char *src)
{
	int dash = 0 ,i
	while (dest[dash])
	{
		dash++;
	}
	for (i = 0; src[i] != 0; i++) 
	{
		dest[dash] = src[i];
		dash++;
	}
	dest[dash] = '\0';
	return (dash);
}
