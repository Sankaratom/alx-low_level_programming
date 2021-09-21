#ifndef DECLARATIONS
#define DECLARATIONS

#include <stdlib.h>
#include <stdio.h>

#ifndef NULL
#define NULL ((void *)0)
#endif
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void __attribute__ ((constructor)) premain();
/**
* Helpers
**/
int str_len(const char *str);

#endif /* DECLARATIONS*/