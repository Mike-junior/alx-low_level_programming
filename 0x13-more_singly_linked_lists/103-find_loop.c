#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *Fnode, *Snode;

	Fnode = Snode = head;
	while (Fnode && Snode && Snode->next)
	{
		Fnode = Fnode->next;
		Snode = Snode->next->next;
		if (Fnode == Snode)
		{
			Fnode = head;
			break;
		}
	}
	if (!Fnode || !Snode || !Snode->next)
		return (NULL);
	while (Fnode != Snode)
	{
		tortoise = Fnode->next;
		Snode = Snode->next;
	}
	return (Snode);
}

