#include <ctype.h>
#include "main.h"

/**
* _isalpha - Returns 1 for letters and 0 for non-letters
* @c: Is the value to be checked
*
* Return: Returns 0 when not a letter and 1 when letters
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
