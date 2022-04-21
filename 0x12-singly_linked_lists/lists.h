#ifndef LIST_H
#define LIST_H

/**
 * struct list_s - singly linked lists
 * @str: string
 * @len: length of string
 * @next: next node
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t print_list(const list_t *h);

#endif
