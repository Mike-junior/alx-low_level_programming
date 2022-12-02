#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fnode, *snode;

	fnode = snode = head;
	while (fnode && snode && snode->next)
	{
		fnode = fnode->next;
		snode = snode->next->next;
		if (fnode == snode)
		{
			fnode = head;
			break;
		}
	}
	if (!fnode || !snode || !snode->next)
		return (NULL);
	while (fnode != snode)
	{
		fnode = fnode->next;
		snode = snode->next;
	}
	return (snode);
}
