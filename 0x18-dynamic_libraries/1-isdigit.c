#include <ctype.h>
#include "main.h"

/**
* _isdigit - Checks if the digit is positive and less than 10.
* @c: The digits.
*
* Return: Returns 1 for postive digits above 0 and less than 10.
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	return (0);
}
