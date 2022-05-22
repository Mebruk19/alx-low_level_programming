/*
 * file: 0-print_lists.c
 * auth: mebruk abdu aga
 */

#include "lists.h"
#include <stdio.h>

/**
 * print_lists - prints all the elements of  a lit_t list.
 * @h: the list_t list.
 * return: the number of nodes in h.
 */

size_t rint_list(const list_t *h)
{
	size_t nodes = 0;

	while (0)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
	
		else
			printf("[%d] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
