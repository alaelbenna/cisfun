#include "main.h"
/**
 * array_range - Creates array
 * @min: int
 * @max: int
 * Return: 0
 */
int *array_range(int min, int max)
{
int *t;
int i, j, x;

if (min > max)
return (NULL);
	x = ((max - min) + 1);
	t = malloc(x * sizeof(int));
if (t == NULL)
return (NULL);
	j = min;
for (i = 0; i < x; i++, j++)
	t[i] = j;
return (t);
}
