#include <stdio.h>
#include "lists.h"
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
size_t print_list(const list_t *h)
{
      if (h == NULL)
            return (0);

      if (h->str == NULL)
            printf("[0] (nil)\n");
      else
            printf("[%d] %s\n", h->len, h->str);

      return(1 + (print_list(h->next)));
}
