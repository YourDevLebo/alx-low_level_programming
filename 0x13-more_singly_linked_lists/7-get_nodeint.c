#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - prints nth node og linked list
 * @head: linked list header
 * @index: the node starting at 0
 * Return: nth node else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	if (head == NULL)
		return (NULL);

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	return (tmp ? tmp : NULL);
}
