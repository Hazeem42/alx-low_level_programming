#include "main.h"

/**
 * main - Entry point
 * Description: a program that prints _putchar,
 * Followed by a new line.
 * Return: Always 0 (Success);
 */
int main(void)
{
char c[10] = "_putchar";
int i = 0;
while (i < 9)
{
	_putchar(c[i]);
	i++;
}
_putchar('\n');
	return (0);
}