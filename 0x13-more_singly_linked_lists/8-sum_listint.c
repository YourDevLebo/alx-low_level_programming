#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - prints sum of all data(n)
 * @head: header for linked list
 * Return: sum
 */
int sum_listint(listint_t *head)
{

	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
