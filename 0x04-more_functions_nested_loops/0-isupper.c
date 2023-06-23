#include "main.h"

/**
 * _isupper - check if a letter is uppercase
 * @c: the number to be checked
 * return: 1 for uppercase or 0 for any else
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
