#include "search_algos.h"

/**
 * print_array - Prints the array being searched for.
 * @array: Pointer to the first element of the array to print
 * @left: Left index of the subarray to print
 * @right: Right index of the array to print
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i != left)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where the value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return ((int)mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
