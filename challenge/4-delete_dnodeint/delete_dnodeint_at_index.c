#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list
 * @head: pointer to head of list
 * @index: index of node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	tmp = *head;

	/* Əgər silinəcək düyün ilk düyündürsə (index == 0) */
	if (index == 0)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}

	/* Silinəcək düyünə (index) qədər irəliləyirik */
	i = 0;
	while (tmp != NULL && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	/* Əgər verilən indeks siyahının uzunluğundan böyükdürsə */
	if (tmp == NULL)
		return (-1);

	/* ƏSAS DÜZƏLİŞ: tmp-dən əvvəlki düyünün 'next' göstəricisini yeniləyirik */
	if (tmp->prev != NULL)
		tmp->prev->next = tmp->next;

	/* tmp-dən sonrakı düyünün 'prev' göstəricisini yeniləyirik */
	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;

	free(tmp);
	return (1);
}
