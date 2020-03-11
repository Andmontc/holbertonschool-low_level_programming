#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - entry function
 * @name: arg name
 * @f: function as argument
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name)
	{
		f(name);
	}
}
