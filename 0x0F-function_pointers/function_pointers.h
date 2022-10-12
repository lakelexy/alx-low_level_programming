#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

typedef __SIZE_TYPE__ size;
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /* #ifndef MAIN_H */
