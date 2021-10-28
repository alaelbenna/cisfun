#include "main.h"
/**
 * _calloc - allocates memory
 * @nmemb: unsigned int
 * @size: unsigned int
 *
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *x;
char *c;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);
	x = malloc(size * nmemb);
if (x == NULL)
return (NULL);
	c = x;
for (i = 0; i < (size * nmemb); i++)
	c[i] = '\0';
return (x);
}
