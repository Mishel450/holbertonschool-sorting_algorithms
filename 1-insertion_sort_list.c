#include "sort.h"
/**
 * insertion_sort_list - sorts the doubly linked list.
 * @list: the doubly linked list.
 * Return: noting.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *t, *n, *aux;

	if (list != NULL)
	{
		aux = (*list);
		while (aux->next)
		{
			while (aux->n > aux->next->n)
			{
				t = aux;
				n = aux->next;
				if (t->prev != NULL)
				n->prev = t->prev;
				if (t->prev != NULL)
				t->prev->next = n;
				else
				*list = n;
				if (n->next != NULL)
				n->next->prev = t;
				if (n->next != NULL)
				t->next = n->next;
				t->prev = n;
				n->next = t;
				print_list(*list);
				if (n->prev != NULL)
				aux = n->prev;
			}
			aux = aux->next;
		}
	}
}
