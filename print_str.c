#include "main.h"

/**
 * print_str - print string
 * @my_list: variadic arguments
 *
 * Return: count of printed characters
 */

int print_str(va_list my_list)
{
	char *str;

	str = va_arg(my_list, char *);

	if (str == NULL)
		return (write(1, "(null)", 6));

	write(1, str, strlen(str));

	return (strlen(str));
}
