#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - function to print name
 * @f: function pointer to the printing function
 * @name: name to print
 * Return: Always 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
