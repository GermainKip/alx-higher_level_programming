#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has
 * a cycle in it
 * @list: pointer to the list
 *
 * Return: 0 if there is no cycle,
 * 1 if there is a cycle
 */

int check_cycle(listint_t *list)
{
	listint_t *him, *her;

	if (list == NULL || list->next == NULL)
		return (0);

	him = list->next;
	her = list->next->next;

	while (him && her && her->next)
	{
		if (him == her)
			return (1);

		him = him->next;
		her = her->next->next;
	}

	return (0);
}
