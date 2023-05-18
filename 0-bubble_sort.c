#include "sort.h"
/**
 * bubble_sort - sorts the array.
 * @array: the array to sort.
 * @size: the large of the array.
 * Return: noting.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int j;
	int flag;

if (size != 0)
{
	for (i = 0; i < size - 1; i++)
	{
		if (array[i] > array[i + 1])
		{
			j = array[i];
			array[i] = array[i + 1];
			array[i + 1] = j;
			print_array(array, size);
			flag = 1;
		}
		if (i == size - 2 && flag == 1)
		{
			flag = 0;
			bubble_sort(array, size);
		}
	}
}
}
