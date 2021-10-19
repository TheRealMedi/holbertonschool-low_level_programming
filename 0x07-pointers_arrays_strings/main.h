#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main.h by Andrés Medina
 */
int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);

void set_string(char **s, char *to);
void print_chessboard(char (*a)[8]);
#endif 