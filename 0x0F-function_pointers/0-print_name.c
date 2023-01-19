#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function to print name
 * @f: function pointer that returns nothing
 * @name: name to print
 * Return: Always 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
