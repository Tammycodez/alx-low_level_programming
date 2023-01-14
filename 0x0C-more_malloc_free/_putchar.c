#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On Success 1.
 * On error, -1 is required, and errno is set appriopriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
