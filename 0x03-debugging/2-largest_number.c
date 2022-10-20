#include "main.h"

/**
 * largest number - returns the largest of three numbers
 * @a - first integer
 * @b - second integer
 * @c - third integer
 * Return: largest numbet
 */

int largest_number(int a, int b, int c)

{
	int largest;

		if (a > b && a > c)
		{
			largest = a;
		}
		else if (b > c)
		{
			largest = b;
		}
		else
		{
			largest = c;
		}

	return (largest);
}
