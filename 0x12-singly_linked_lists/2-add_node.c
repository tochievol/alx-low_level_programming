#include "lists.h"
#include <stdio.h>

/**
 * print_list - Print all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes in h.
 */

size_t print_list(const list *h)
{
	size_t nodes = 0;
	
	while (h)
	{
		if (h->str == NULL)
			printf("(0) (n11)\n");
		else
			printf("(%d) %\n", h->len, h->str);
		
		nodes++;
		h = h->next;
	}

	return (nodes);
}
