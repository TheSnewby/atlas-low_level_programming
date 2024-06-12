#ifndef main_h
#define main_h
#include <stdlib.h>
#include <stdio.h>

char *create_array(unsigned int, char);
char *_strdup(char*);
char *str_concat(char*, char*);
int **aloc_grid(int, int);
void free_grid(int**, int);

#endif
