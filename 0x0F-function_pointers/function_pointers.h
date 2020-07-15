#ifndef FUN_POINTER_H
#define FUN_POINTER_H
#include <stdio.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));


#endif /* ifndef FUN_POINTER_H  */
