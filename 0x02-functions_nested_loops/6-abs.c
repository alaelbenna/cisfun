#include "main.h"

/**
 * _abs - Computes the absolute value
 * of an integer.
 *
 * @i: input number as integer 
 * Return: the absolute value of an integer.
 */
int _abs(int i)
{
	if(i < 0)
		i = -i;
	if (i >= 0)
		i = i;
	return (i);		
	
}
