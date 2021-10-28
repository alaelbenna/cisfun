#include "main.h"
/**
 * string_nconcat - Concats two strings
 * @n: int
 * @s1: char
 * @s2: char
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i, j, x, y;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] != '\0'; i++)
;
for (j = 0; s2[j] != '\0'; j++)
;
if (n >= j)
n = j;
s = malloc(sizeof(char) * (i + n + 1));
if (s == NULL)
return (NULL);
for (x = 0; s1[x] != '\0'; x++)
s[x] = s1[x];
for (y = x; y < (i + n); y++)
s[y] = s2[y - x];
s[y] = '\0';
return (s);
}
