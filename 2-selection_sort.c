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
 * selection_sort - sorts an array using s.s
 * @array: array to sort
 * @size: its size
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
size_t i, j = 0;
int min;
if (size < 2)
return;
while (j < size - 1)
{
min = j;
for (i = j + 1; i < size; i++)
{
if (array[i] <  array[min])
min = i;
}
swap(&array[min], &array[j]);
print_array(array, size);
j++;
}
}
