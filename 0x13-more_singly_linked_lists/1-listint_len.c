#include "lists.h"
#include <stdio.h>

/**
 * listint_len - prints the number of elements
 * @h: header
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num += 1;
		h = h->next;
	}
	return (num);
}
