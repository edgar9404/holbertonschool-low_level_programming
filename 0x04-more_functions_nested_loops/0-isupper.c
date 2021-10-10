#include "main.h"


/**
 * _isupper - if value is upper case
 *
 *
 * Return: 1 if c is capital, otherwise 0
 **/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
