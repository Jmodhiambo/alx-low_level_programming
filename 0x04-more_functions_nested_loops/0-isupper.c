#include <ctype.h>
#include "main.h"

/**
* _isupper - returns 1 for uppercase and 0 for lowercase.
*
* @c: Is the character to be determined if lower or uppercase
* Return: 0 for lowercase and 1 for uppercase
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

