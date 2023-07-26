#include "main.h"

/**
 *_puts_recursion - print a string with recursion
 *@s: input
 *
 *Return: Always 0 (success)
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
