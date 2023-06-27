#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: pointer to string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, nchar = 0;
	va_list my_list;
	int (*f)(va_list);

	va_start(my_list, format);
	/* in case it's a null pointer */
	if (format == NULL || (format[0] == '%' && !format[1]) ||
			((format[0] == '%' && format[1] == ' ' && !format[2])))
		return (-1);
	while (format[i]) /* to print each character */
	{
		if (format[i] != '%')
		{
			nchar += write(1, &format[i], 1);
			i++;
			continue;
		}
	if (format[i] == '%')
	{
		f = get_specifier(&format[i + 1]);
		if (f != NULL) /* once specifier is found  */
		{
			nchar += f(my_list);
			i += 2;
			continue;
		}

		if (format[i + 1] == '\0') /* when reaching end of string */
			return (-1);
		if (format[i + 1] != '\0') /* print a character after % */
		{
			nchar += write(1, &format[i], 2);
			i += 2;
			continue;
		}
	}
	}
	va_end(my_list);
	return (nchar);
}
