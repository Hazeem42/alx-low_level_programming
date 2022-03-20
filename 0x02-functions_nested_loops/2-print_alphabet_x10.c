#include "main.h"
/**
 * print_alphabet_x10 - A function tht prints the alphabets 10 times
 *
 * Description: Function that prints the alphabets
 * 10 times and a new line after each
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
