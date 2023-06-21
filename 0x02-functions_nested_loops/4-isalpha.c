#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: The character is to checked
 * Return 1 if 'c' is an alphabetic character or 0 for anything else
 */

int _isalpha(int c)

{
	if ((c <= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
