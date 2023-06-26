#include "main.h"

/**
 * print_c - print character
 * @my_list: variadic arguments
 *
 * Return: count of printed characters
 */

int print_c(va_list my_list)
{
	unsigned char c = (unsigned char)va_arg(my_list, int);
	int count = 0;

	if (c)
	{
	count = write(1, &c, 1);
	return (count);
	}

	return (0);
}
