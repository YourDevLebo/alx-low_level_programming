#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - deletes the head node of linked list
 * @head: header for linked list
 * Return: head nodes's data , 0 if empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;
	data = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (data);
}
