#include "main.h"

/**
 * _isalpha - Checks if a character is lowercase or uppercase
 * @c: Characcter to be checked
 * Return: 1 if character is a letter else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
