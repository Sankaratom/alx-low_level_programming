#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include "3-add_node_end.c"
#include "4-free_list.c"
#include "0-print_list.c"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;

    head = NULL;
    add_node_end(&head, "Bob");
    add_node_end(&head, "&");
    add_node_end(&head, "Kris");
    add_node_end(&head, "love");
    add_node_end(&head, "asm");
    print_list(head);
    free_list(head);
    head = NULL;
    return (0);
}