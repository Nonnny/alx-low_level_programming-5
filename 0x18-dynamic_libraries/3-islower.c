#include "main.h"

/**
 *  _islower - checks if a character is lower case
 *  @c: character
 *  Return: 1 if character is lowercase else 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
