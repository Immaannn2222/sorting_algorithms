#include "sort.h"
/**
 * insertion_sort_list - sorts a list
 * @list: a doubly linked list
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
listint_t *o = NULL, *tmp = *list, *h;
if (!list || !*list || !(*list)->next)
	return;

h = (*list)->next;
while (h)
{
o = h;
while (o->prev != NULL)
{
tmp = o->prev;
if (o->n < tmp->n)
{
if (tmp->prev)
tmp->prev->next = o;
else
*list = o;
if (o->next)
o->next->prev = tmp;
tmp->next  = o->next;
o->prev = tmp->prev;
o->next = tmp;
tmp->prev = o;
print_list(*list);
continue;
}
o = o->prev;
}
h = h->next;
}
}

