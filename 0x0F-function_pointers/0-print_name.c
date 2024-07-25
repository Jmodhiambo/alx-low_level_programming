#include <stdlib.h>
#include "function_pointers.h"

/**
* print_name - prints a name
* @name: the name to be printed
* @f: a function declaration
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
