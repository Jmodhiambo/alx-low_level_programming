#include <ctype.h>
#include "main.h"

/**
* _islower - Returns 1 for lowercase and 0 for uppercase
* @c: Is the value to be checked
*
* Return: Returns 0 when uppercase and 1 when lowercase
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
