#include "sort.h"
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
int max, j = 0, x;
int *occu, *output;
max = array[0];
if (size < 2 || !array)
return;
for (i = 0; i < size; i++)
{
if (array[i] > max)
max = array[i];
}
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
if(!output)
{
free(occu);
return;
}
for (i = 0; i < size; i++)
{
for (j = 0; j <= max; j++)
{
if (array[i] == j)
{
x = occu[j] - 1;
output[x] = array[i];
}
}
}
for (i = 0; i < size; i++)
{
array[i] = output[i];
}
free(output);
free(occu);
}
