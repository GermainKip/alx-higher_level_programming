#include "lists.h"

/**
 * insert_node - inserts a new node in a sorted linked list
 * @head: pointer to a pointer to the head of the linked list
 * @number: the integer to be inserted in the list
 *
 * Return: the address of the new node or NULL if it fails
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new, *hd, *prev_hd;

	hd = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (hd->n > number)
			break;
		prev_hd = hd;
		hd = hd->next;
	}
	new->n = number;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->next = hd;
		if (hd == *head)
			*head = new;
		else
			prev_hd->next = new;
	}
	return (new);
}
