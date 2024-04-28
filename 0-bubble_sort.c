#include "sort.h"

/**
 *  bubble_sort - A function that sorts an array of integers in ascending
 *  order using the Bubble sort algorithm
 *
 *  @array: The array to be printed
 *  @size: Number of elements in @array
 *
 *  Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t num1, num2, temp;

	for(num1 = 0; num1 < size; num1++)
	{
		for(num2 = 0; num2 < size - num1 - 1; num2++)
		{
			if (array[num2] > array[num2 + 1])
			{
				temp = array[num2];
				array[num2] = array[num2 + 1];
				array[num2 + 1] = temp;
				/*printf("%d\n", array[num2]);*/
				print_array(array, size);
			}
		}
	}
}
