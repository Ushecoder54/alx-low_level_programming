#include "main.h"

/**
 * reverse_array - Reverses the contents of arrays
 * @a: the array to be reversed
 * @n: the no. of elements in the array
 */

void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
