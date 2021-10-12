#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - frees listint_t list
 * @head: header to be freed
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
