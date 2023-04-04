#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * by Oussama El Attar @OusStack
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *prev;

	if (!head || !*head)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	for (i = 0; tmp && i < index; i++)
	{
		prev = tmp;
		tmp = tmp->next;
	}

	if (!tmp)
		return (-1);

	prev->next = tmp->next;
	free(tmp);

	return (1);
}
