#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _abs - fuctions to return absolute values
* @x: integer to be computed
*
* Return: Returns absolute values
*/

int _abs(int x)
{
	if (x < 0)
		return (-x);
	else
		return (x);
}
