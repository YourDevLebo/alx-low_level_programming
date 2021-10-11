#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - adds new node at end of list
 * @head: header
 * @n: numbers of nodes
 * Return: address of new element else NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
		*head = new;
	else
	{
		new->n = n;
		new->next = NULL;
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (new);
}
