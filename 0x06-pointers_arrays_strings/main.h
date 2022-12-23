#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int size);
char *_strncpy(char *dest, char *src, int length);
int _strcmp(char *, char *);
void reverse_array(int *, int);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
void print_number(int);

#endif /* MAIN_H */
