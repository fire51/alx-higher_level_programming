#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
/**
 *
 *
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s*next;
}listint_t;

size_t print_listint(const listint_t*h);
listint_t *add_nodeint(listint_t**head,const intn);
void free_listint(listint_t*head);
int check_cycle(listintt_t*list);

#endif/*LIST_H*/

