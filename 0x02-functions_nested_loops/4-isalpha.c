#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: function parameter
 * Return: 1 and 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
