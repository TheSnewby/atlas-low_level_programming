#ifndef main_h
#define main_h
#include <unistd.h>

int _putchar(char);
void reset_to_98(int*);
void swap_int(int*, int*);
int _strlen(char*);
void _puts(char*);
void print_rev(char*);
void rev_string(char*);
void puts2(char*);
void puts_half(char*);
void print_array(int*, int);
char *_strcpy(char*, char*);
int _atoi(char*);
int keygen(void);
char *_strcat(char *dest, char *src);
char *_strncat(char*, char*, int);
char *_strncpy(char*, char*, int);
int _strcmp(char*, char*);
void reverse_array(int*, int);
char *string_toupper(char*);
char *cap_string(char*);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int);
char *_strchr(char*, char);
unsigned int _strspn(char*, char*);
char *_strpbrk(char*,char*);
char *_strstr(char*, char*);
void print_chessboard(char (*a)[8]);
void print_diagsums(int*, int);


#endif
