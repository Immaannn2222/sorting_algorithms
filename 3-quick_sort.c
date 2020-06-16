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
 * lum_part - lumoto partition for quicksort
 * @A: array of integers
 * @lo: the index of the first elt
 * @hi:starting index(last element)
 *
 * Return: i
 */

int lum_part(int *A, int lo, int hi)
{
int i, j;
int pivot;
pivot = A[hi];
i = lo - 1;
for (j = lo; j <=  hi - 1; j++)
{
if (A[j] < pivot)
{
i += 1;
swap(&A[i], &A[j]);
}
}
swap(&A[i + 1], &A[hi]);
return (i + 1);
}
/**
 * quicksort - quicksorts the array
 * @A: array of integers
 * @lo: the index of the first elt
 * @hi:starting index(last element)
 *
 * Return: void
 */
int quicksort(int *A, int lo, int hi, size_t size)
{
if (lo < hi)
{
int s;
s = lum_part(A, lo, hi);
print_array(A, size);
quicksort(A, lo, s - 1, size);
quicksort(A, s + 1, hi, size);
}
return (0);
}

/**
 * quick_sort - sorts using the Quick sort algorithm
 * @array: the array
 * @size: its size
 *
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
quicksort(array, 0, size - 1, size);
}

