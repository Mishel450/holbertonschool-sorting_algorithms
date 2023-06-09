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
		while (aux)
		{
			while (aux->next != NULL && aux->n > aux->next->n)
			{
				t = aux;
				n = aux->next;
				n->prev = t->prev;
				if (t->prev != NULL)
				t->prev->next = n;
				else
				*list = n;
				if (n->next != NULL)
				n->next->prev = t;
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
