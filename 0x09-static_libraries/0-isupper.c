#include "main.h"
#include <stdio.h>
/**
 * _isupper - cheks for uppercase character
 * @c: the character to print
 *
 * return:1 if upper case found else 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
