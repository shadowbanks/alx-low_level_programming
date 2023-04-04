#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

int _putchar(char);
char *_memset(char *, char, unsigned int);
char *_memcpy(char *, char *, unsigned int);
char *_strchr(char *, char);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
int _strlen(char *);
void print_chessboard(char (*a)[8]);

#endif /*MAIN_H*/
