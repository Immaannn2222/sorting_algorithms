#include "sort.h"

/**
 * swap - swaps 2 elements in an array
 * @f: first element
 * @s: second element
 *
 * Return: void
 */

void swap(int *f, int *s)
{
int tmp;
tmp = *f;
*f = *s;
*s = tmp;
}

/**
 * bubble_sort - sorts an array of ints in ascending order
 * @array: the array to sort
 * @size: it size
 * Return: the array sorted
 */

void bubble_sort(int *array, size_t size)
{
size_t i, j;
if (size < 2)
{
return;
}
for (i = 0; i < size - 1; i++)
for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
swap(&array[j], &array[j + 1]);
print_array(array, size);
}
}
}
