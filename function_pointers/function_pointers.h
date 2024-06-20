#ifndef function_pointers_h
#define function_pointers_h
#include <stdio.h>

void _putchar(char);
void print_name(char *, void (*)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
