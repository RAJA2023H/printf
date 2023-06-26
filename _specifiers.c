#include "main.h"

/**
 * get_specifier - checks if specifier is valid
 *		and prints it with appropriate function
 * @format: pointer to specifier
 *
 * Return: pointer to appropriate function when successful
 *		or NULL when not successful
 */

int (*get_specifier(const char *format))(va_list) {
	int i;

	specify_t arr[7] = {{"c", print_c}, {"s", print_str},
		{"%", print_cent}, {"i", print_int}, {"d", print_int},
		{"b", print_binary}, {NULL, NULL}};

	for (i = 0; arr[i].spec != NULL; i++)
	{
		if (*(arr[i].spec) == *format)
			return (arr[i].func);
	}
	return (NULL);
}
