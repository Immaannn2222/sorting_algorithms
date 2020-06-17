#include "sort.h"

/**
 * max_array - finds the max
 * @arr: the array
 * @s: its size
 *
 * Return: max
 */
int max_array(int *arr, size_t s)
{
size_t i;
int max = arr[0];
for (i = 0; i < s; i++)
{
if (arr[i] > max)
max = arr[i];
}
return (max);
}

/**
 * counting_sort - sorts an array
 * @array: an array
 * @size: its size
 *
 * Return: void
 */

void counting_sort(int *array, size_t size)
{
size_t i;
int max, j = 0, x, *occu, *output;
if (size < 2 || !array)
return;
max = max_array(array, size);
occu = malloc(sizeof(int) * (max + 1));
if (!occu)
return;
i = 0;
for (i = 0; i < size; i++)
{
j = array[i];
occu[j] += 1;
}
for (j = 1; j <= max; j++)
{
occu[j] += occu[j - 1];
}
print_array(occu, max + 1);
output = malloc(sizeof(int) * size);
if (!output)
{
free(occu);
return;
}
for (i = 0; i < size; i++)
for (j = 0; j <= max; j++)
{
if (array[i] == j)
{
x = occu[j] - 1;
output[x] = array[i];
}
}
for (i = 0; i < size; i++)
{
array[i] = output[i];
}
free(output);
free(occu);
}
