#include <stdio.h>
#include "main.h"

/**
 * _isupper - shows 1 if input is uppercase
 * character. Another case, shows 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for uppercase character and 0 for the rest.
 */
int _isupper(int c)
{
	return (c >= 65 && c <= 90);
}
