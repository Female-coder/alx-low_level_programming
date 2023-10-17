#include "variadic_functions.h"

/**
 * sum_of all - total of all paramaters of function
 * @n: number of argument
 *
 * Return: sum of all characters provided
 */
int sum_them_all(const unsigned int n, ...)
{
	/* declaring the sum variable */
	unsigned int sum = 0;
	unsigned int i;

	/* declaing the e va_list data_type */
	va_list ptr_n;

	/* initializing the variadic function args */
	va_start(ptr_n, n);
	/* supply sum args and iterate elements of func */
	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(ptr_n, const unsigned int);
		}
	}
	va_end(ptr_n); /* end function traversal */
	return (sum);
}
